#include "main.h"

/**
 * _strcmp - cmp
 * @s1: parameter
 * @s2: parameter
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i, m, b, n, k;
	int len1 = 0;
	int len2 = 0;
	int z = 0;
	int y = 0;
	int x = 0;

	while (s1[len1] != '\0')
	{
	len1++; }
	while (s2[len2] != '\0')
	{
	len2++; }
	if (len1 > len2)
	m = len1;
	else if (len1 <= len2)
	m = len2;
	for (i = 0; i < m; i++)
	{
	if (s1[i] == s2[i])
	z++;
	else if (s1[i] > s2[i])
	{y = (int)(s1[i]) + y; }
	else if (s1[i] < s2[i])
	{x = (int)(s2[i]) + x; }}
	if ((z == len1) && (z  == len2))
	k = 0;
	else if (y > x)
	{
	for (i = 0; i < m; i++)
	{
	if (s1[i] != s2[i])
	{b = (int)(s1[i]) - (int)(s2[i]);
	break; }}
	k = b; }
	else if (x > y)
	{
	for (i = 0; i < m; i++)
	{
	if (s1[i] != s2[i])
	{n = (int)(s1[i]) - (int)(s2[i]);
	break; }}
	k = n; }
	return (k); }
