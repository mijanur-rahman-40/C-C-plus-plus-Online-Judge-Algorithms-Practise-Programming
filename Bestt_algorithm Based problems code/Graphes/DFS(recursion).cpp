
#include<stdio.h>
#define MAX 100

#define initial 1
#define visited 2
#define finished 3

int vertices;
int adjacent_matrix[MAX][MAX];
void make_graph();
void graph_traversal();
void depth_first_search(int vertex);

int state[MAX];

int main()
{
      make_graph();
      graph_traversal();
      return 0;
}

void graph_traversal()
{
      int vertex;
      for(vertex = 0; vertex < vertices; vertex++)
      {
            state[vertex] = initial;
      }
      printf("Enter Initial Vertex for Depth First Search:\t");
      scanf("%d", &vertex);
      depth_first_search(vertex);
      for(vertex = 0; vertex < vertices; vertex++)
      {
            if(state[vertex] == initial)
            {
                  depth_first_search(v);
            }
      }
      printf("\n");
}

void depth_first_search(int vertex)
{
      int count;
      printf("%3d", vertex);
      state[vertex] = visited;
      for(count = 0; count < vertices; count++)
      {
            if(adjacent_matrix[vertex][count] == 1 && state[count] == initial)
            {
                  depth_first_search(count);
            }
      }
      state[vertex] = finished;
}

void make_graph()
{
      int count, maximum_edges, origin_vertex, destination_vertex, weight;
      printf("Enter total number of vertices:\t");
      scanf("%d", &vertices);
      maximum_edges = vertices * (vertices - 1);
      for(count = 0; count < maximum_edges; count++)
      {
            printf("Enter Edge [%d] Co-ordinates [-1 -1] to Quit\n", count + 1);
            printf("Enter Origin Vertex Point:\t");
            scanf("%d", &origin_vertex);
            printf("Enter Destination Vertex Point:\t");
            scanf("%d", &destination_vertex);
            if((origin_vertex == -1) && (destination_vertex == -1))
            {
                  break;
            }
            if(origin_vertex >= vertices || destination_vertex >= vertices || origin_vertex < 0 || destination_vertex < 0)
            {
                  printf("Edge Co - ordinates are Invalid\n");
                  count--;
            }
            else
            {
                  adjacent_matrix[origin_vertex][destination_vertex] = 1;
            }
      }
}
