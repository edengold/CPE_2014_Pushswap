/*
** p_operation.c for p operation in /home/kerebel/Documents/EPITECH/doublechaine
** 
** Made by kerebe_p
** Login   <kerebe_p@epitech.eu>
** 
** Started on  Thu Dec  4 15:54:03 2014 kerebe_p
** Last update Thu Dec  4 15:54:03 2014 kerebe_p
*/

#include "include/my.h"

void		my_pb(t_list *l_a, t_list *l_b, int i)
{
  t_list	*tmp;
  t_list	*tmp2;

  tmp = l_a->next;
  tmp2 = l_b->next;
  l_a->next->next->prev = l_a;
  l_a->next = l_a->next->next;
  l_b->next = tmp;
  tmp->prev = l_b;
  tmp->next = tmp2;
  tmp2->prev = tmp;
  my_put_op("pb", i, l_a, l_b);
}

void		my_pa(t_list *l_a, t_list *l_b, int i)
{
  t_list	*tmp;
  t_list	*tmp2;

  tmp = l_b->next;
  tmp2 = l_a->next;
  l_b->next->next->prev = l_b;
  l_b->next = l_b->next->next;
  l_a->next = tmp;
  tmp->prev = l_a;
  tmp->next = tmp2;
  tmp2->prev = tmp;
  my_put_op("pa", i, l_a, l_b);
}
