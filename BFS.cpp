#include <iostream>
#include <queue>

using namespace std;

#define size 20

int g[size][size];
int visit[size];
int n;

class Queue
{
    int front, rear, data[size];

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    bool isEmpty()
    {
        return front == -1;
    }

    void enqueue(int x)
    {
        if (rear != size - 1)
        {
            if (front == -1)
                front = 0;
            data[++rear] = x;
        }
    }

    int dequeue()
    {
        if (front != -1)
        {
            int d = data[front];
            if (front == rear)
            {
                front = rear = -1;
            }
            else
            {
                front++;
            }
            return d;
        }
        return -1;
    }
};

class BFS
{
public:
    void create()
    {
        cout << "\nEnter the number of vertices: ";
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                g[i][j] = 0;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "Enter the value for g[" << i << "][" << j << "]: ";
                cin >> g[i][j];
            }
        }

        cout << "\nAdjacency Matrix:\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << g[i][j] << " ";
            }
            cout << endl;
        }
    }

    void bfs()
    {
        Queue queue;

        for (int i = 0; i < n; i++)
        {
            visit[i] = 0;
        }

        cout << "BFS Traversal: ";

        for (int i = 0; i < n; i++)
        {
            if (visit[i] == 0)
            {
                visit[i] = 1;
                queue.enqueue(i);

                while (!queue.isEmpty())
                {
                    int v = queue.dequeue();
                    cout << v << " ";

                    for (int j = 0; j < n; j++)
                    {
                        if (g[v][j] == 1 && visit[j] == 0)
                        {
                            visit[j] = 1;
                            queue.enqueue(j);
                        }
                    }
                }
            }
        }
        cout << "\n";
    }
};

int main()
{
    BFS b;
    b.create();
    b.bfs();

    return 0;
}

