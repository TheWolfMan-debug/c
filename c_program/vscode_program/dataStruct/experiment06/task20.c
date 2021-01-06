#include "stdio.h"
#include "stdlib.h"
#define MaxVertexNum 100 //������󶥵���

typedef struct
{
    char vexs[MaxVertexNum]; //�����
    int edges[MaxVertexNum][MaxVertexNum];
    //�ڽӾ��󣬿ɿ����߱�
    int n, e; //ͼ�еĶ�����n�ͱ���e
} MGraph;     //���ڽӾ����ʾ��ͼ������

//��������Edges�Ķ���
struct edge
{
    char Head;
    char Tail;
    int lowcost;
}Edge[MaxVertexNum];

// struct edge Edge[MaxVertexNum];

//��������Vexser�Ķ���
int Vexset[MaxVertexNum];

//=========�����ڽӾ���=======
void CreatMGraph(MGraph *G)
{
    int i, j, k, w;
    char a;
    printf("Input VertexNum(n) and EdgesNum(e): ");
    scanf("%d,%d", &G->n, &G->e); //���붥�����ͱ���
    scanf("%c", &a);
    printf("Input Vertex string:");
    for (i = 0; i < G->n; i++)
    {
        scanf("%c", &a);
        G->vexs[i] = a; //���붥����Ϣ�����������
    }
    for (i = 0; i < G->n; i++)
        for (j = 0; j < G->n; j++)
            G->edges[i][j] = 0; //��ʼ���ڽӾ���
    printf("Input edges,Creat Adjacency Matrix\n");
    for (k = 0; k < G->e; k++)
    {                                //����e���ߣ������ڽӾ���
        scanf("%d%d%d", &i, &j, &w); //����ߣ�Vi��Vj���Ķ������
        G->edges[i][j] = w;
        G->edges[j][i] = w; //��Ϊ����ͼ������Ϊ�Գƾ�������������ͼ��ȥ���������

        Edge[k].Head = i+'0';
        // printf("��ʼ��head:%c",Edge[k].Head);
        Edge[k].Tail = j+'0';
        // printf("��ʼ��tail:%c",Edge[k].Tail);
        Edge[k].lowcost = w;
        // printf("��ʼ��lowcost:%d\n",Edge[k].lowcost );

    }
}
//=========�����־������Ϊȫ�ֱ���=======
typedef enum
{
    FALSE,
    TRUE
} Boolean;
Boolean visited[MaxVertexNum];
//========DFS��������ȱ����ĵݹ��㷨======
void DFSM(MGraph *G, int i)
{ //��ViΪ��������ڽӾ����ʾ��ͼG����DFS�������ڽӾ�����0��1����
    int j;
    printf("%c", G->vexs[i]);  //���ʶ���Vi
    visited[i] = TRUE;         //���ѷ��ʱ�־
    for (j = 0; j < G->n; j++) //��������Vi���ڽӵ�
        if (G->edges[i][j] == 1 && !visited[j])
            DFSM(G, j); //��Vi��Vj����E����Vjδ���ʹ�����VjΪ�³�����
}
void DFS(MGraph *G)
{ //�˶δ�����һ������
    int i;
    for (i = 0; i < G->n; i++)
        visited[i] = FALSE; //��־������ʼ��
    for (i = 0; i < G->n; i++)
        if (!visited[i]) //Viδ���ʹ�
            DFSM(G, i);  //��ViΪԴ�㿪ʼDFS����
}
//===========BFS��������ȱ���=======
void BFS(MGraph *G, int k)
{ //��VkΪԴ������ڽӾ����ʾ��ͼG���й����������
    int i, j, f = 0, r = 0;
    int cq[MaxVertexNum]; //�������
    for (i = 0; i < G->n; i++)
        visited[i] = FALSE; //��־������ʼ��
    for (i = 0; i <= G->n; i++)
        cq[i] = -1;           //���г�ʼ��
    printf("%c", G->vexs[k]); //����Դ��Vk
    visited[k] = TRUE;
    cq[r] = k; //Vk�ѷ��ʣ�������ӡ�ע�⣬ʵ�����ǽ���������
    while (cq[f] != -1)
    { //�ӷǿ���ִ��
        i = cq[f];
        f = f + 1;                 //Vf����
        for (j = 0; j < G->n; j++) //����Vi���ڽӵ�Vj
            if (G->edges[i][j] == 1 && !visited[j])
            {                             //Vjδ���� �������д�����һ������
                printf("%c", G->vexs[j]); //����Vj
                visited[j] = TRUE;
                r = r + 1;
                cq[r] = j; //���ʹ�Vj���
            }
    }
}

void Sort(struct edge E[], int n)
{
    int i, j;
    struct edge temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (E[j].lowcost < E[i].lowcost)
            {
                temp = E[j];
                E[j] = E[i];
                E[i] = temp;
            }
        }
    }
}

int LocateVex(MGraph G, char vex)
{
    int i;
    for (i = 0; i < G.n; i++)
    {
        if (G.vexs[i] == vex)
        {
            return i;
        }
    }
}

void MiniSpanTree_Kruskal(MGraph G)
{
    printf("��ʼִ��\n");
    Sort(Edge, G.e);
    printf("����������\n");
    for (int i = 0; i < G.e; i++)
    {
        printf("����1��%c ����2��%c Ȩֵ��%d\n", Edge[i].Head,Edge[i].Tail,Edge[i].lowcost);
    }
    printf("��ʼ��ʼ���ڵ����ͨ����:\n");
    for (int i = 0; i < G.n; i++)
    {
        Vexset[i] = i;
    }
    for (int i = 0; i < G.n; i++)
    {
        printf("%d ", Vexset[i]);
    }
    printf("\n");

    for (int i = 0; i < G.e; i++)
    {
        int v1 = LocateVex(G, Edge[i].Head);
        int v2 = LocateVex(G, Edge[i].Tail);

        int vs1 = Vexset[v1];
        int vs2 = Vexset[v2];
        if (vs1 != vs2)
        {
            printf("Ȩֵ��%d ����1��%c ����2��%c\n",Edge[i].lowcost,Edge[i].Head, Edge[i].Tail);
            for (int j = 0; j < G.n; j++)
            {
                if (Vexset[j] == vs2)
                {
                    Vexset[j] = vs1;
                }
            }
        }
    }
}

//==========main=====
void main()
{
    MGraph *G;
    G = (MGraph *)malloc(sizeof(MGraph)); //ΪͼG�����ڴ�ռ�
    CreatMGraph(G);                       //�����ڽӾ���

    // printf("Print Graph DFS: ");
    // DFS(G); //������ȱ���
    // printf("\n");
    // printf("Print Graph BFS: ");
    // BFS(G, 3); //�����Ϊ3�Ķ��㿪ʼ������ȱ���
    // printf("\n");

    MiniSpanTree_Kruskal(*G);
    //  LocateVex(*G, '5');

    // printf("%d\n",'1');
    // printf("%c\n",1+'0');

    system("pause");
}
