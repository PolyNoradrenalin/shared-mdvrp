#ifndef S_MDVRP_NODE_H
#define S_MDVRP_NODE_H

/**
 * Type du noeud, sert à savoir si le noeud est un producteur ou un client.
 */
enum NodeType
{
    Client,
    Producer
};

/**
 * Classe permettant de représenter le noeud d'une instance.
 */
class Node
{
public:
    // Identifiant du nœud
    int id;

    // Type du nœud
    NodeType nodeType;

    // Cordonnées du nœud dans l'instance
    float x;
    float y;

    Node(int id, NodeType nodeType, float x, float y);
};

#endif //S_MDVRP_NODE_H