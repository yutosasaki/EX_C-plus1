using System.Collections.Generic;

/// <summary>
/// [0, max] の範囲の整数をキーに持つデータ構造をバケットソート。
/// </summary>
/// <typeparam name="T">値の型</typeparam>
/// <param name="a">対象の配列</param>
/// <param name="max">キーの最大値</param>
				public static void BucketSort<T>(KeyValuePair<int, T>[] a, int max)
				{
				  // バケツを用意
				  List<T>[] bucket = new List<T>[max + 1];

				  // バケツに値を入れる
				  for (int i = 0; i < a.Length; ++i)
				    {
				      if (bucket[a[i].Key] == null) bucket[a[i].Key] = new List<T>();
				      bucket[a[i].Key].Add(a[i].Value);
				    }

				  // バケツ中の値の結合
				  for (int j = 0, i = 0; j < bucket.Length; ++j)
				    if(bucket[j] != null)
				      foreach (T val in bucket[j])
					a[i++] = new KeyValuePair<int, T>(j, val);
				}
