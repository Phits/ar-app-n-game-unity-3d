#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000007 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000008 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000009 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000A TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000C TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000D System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000F System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000011 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000013 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000014 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000015 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000016 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000017 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000018 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000019 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000001A System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000001B System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000001C System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001D System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000001E System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000001F System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000020 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000021 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000022 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000023 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000024 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000026 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000027 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000028 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000029 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000002A System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x0000002B System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000002C System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000002D System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000002E System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000002F System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000030 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000031 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000032 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000033 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000034 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000035 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000036 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000037 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000038 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000039 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x0000003A System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x0000003B System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x0000003C System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x0000003D System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x0000003E System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x0000003F System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x00000040 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x00000041 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000042 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000043 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000044 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000045 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000046 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000047 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000048 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000049 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x0000004A System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000004B System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000004C System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x0000004D System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x0000004E System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000004F System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000050 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000051 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000052 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000053 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000054 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000055 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000056 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x00000057 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x00000058 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x00000059 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x0000005A System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x0000005B System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x0000005C System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x0000005D T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x0000005E System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x0000005F System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[95] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[95] = 
{
	3689,
	3796,
	3796,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[28] = 
{
	{ 0x02000004, { 47, 4 } },
	{ 0x02000005, { 51, 9 } },
	{ 0x02000006, { 60, 7 } },
	{ 0x02000007, { 67, 10 } },
	{ 0x02000008, { 77, 1 } },
	{ 0x0200000A, { 78, 3 } },
	{ 0x0200000B, { 83, 5 } },
	{ 0x0200000C, { 88, 7 } },
	{ 0x0200000D, { 95, 3 } },
	{ 0x0200000E, { 98, 7 } },
	{ 0x0200000F, { 105, 4 } },
	{ 0x02000010, { 109, 21 } },
	{ 0x02000012, { 130, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 5 } },
	{ 0x06000006, { 15, 2 } },
	{ 0x06000007, { 17, 1 } },
	{ 0x06000008, { 18, 3 } },
	{ 0x06000009, { 21, 2 } },
	{ 0x0600000A, { 23, 4 } },
	{ 0x0600000B, { 27, 4 } },
	{ 0x0600000C, { 31, 3 } },
	{ 0x0600000D, { 34, 1 } },
	{ 0x0600000E, { 35, 3 } },
	{ 0x0600000F, { 38, 2 } },
	{ 0x06000010, { 40, 2 } },
	{ 0x06000011, { 42, 5 } },
	{ 0x0600002F, { 81, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[132] = 
{
	{ (Il2CppRGCTXDataType)2, 1561 },
	{ (Il2CppRGCTXDataType)3, 6523 },
	{ (Il2CppRGCTXDataType)2, 2711 },
	{ (Il2CppRGCTXDataType)2, 2360 },
	{ (Il2CppRGCTXDataType)3, 11699 },
	{ (Il2CppRGCTXDataType)2, 1644 },
	{ (Il2CppRGCTXDataType)2, 2364 },
	{ (Il2CppRGCTXDataType)3, 11712 },
	{ (Il2CppRGCTXDataType)2, 2362 },
	{ (Il2CppRGCTXDataType)3, 11705 },
	{ (Il2CppRGCTXDataType)2, 524 },
	{ (Il2CppRGCTXDataType)3, 19 },
	{ (Il2CppRGCTXDataType)3, 20 },
	{ (Il2CppRGCTXDataType)2, 1025 },
	{ (Il2CppRGCTXDataType)3, 4934 },
	{ (Il2CppRGCTXDataType)2, 2084 },
	{ (Il2CppRGCTXDataType)3, 10077 },
	{ (Il2CppRGCTXDataType)3, 5408 },
	{ (Il2CppRGCTXDataType)2, 697 },
	{ (Il2CppRGCTXDataType)3, 1303 },
	{ (Il2CppRGCTXDataType)3, 1304 },
	{ (Il2CppRGCTXDataType)2, 1645 },
	{ (Il2CppRGCTXDataType)3, 6838 },
	{ (Il2CppRGCTXDataType)2, 1480 },
	{ (Il2CppRGCTXDataType)2, 1108 },
	{ (Il2CppRGCTXDataType)2, 1199 },
	{ (Il2CppRGCTXDataType)2, 1250 },
	{ (Il2CppRGCTXDataType)2, 1481 },
	{ (Il2CppRGCTXDataType)2, 1109 },
	{ (Il2CppRGCTXDataType)2, 1200 },
	{ (Il2CppRGCTXDataType)2, 1251 },
	{ (Il2CppRGCTXDataType)2, 1201 },
	{ (Il2CppRGCTXDataType)2, 1252 },
	{ (Il2CppRGCTXDataType)3, 4935 },
	{ (Il2CppRGCTXDataType)2, 1192 },
	{ (Il2CppRGCTXDataType)2, 1193 },
	{ (Il2CppRGCTXDataType)2, 1248 },
	{ (Il2CppRGCTXDataType)3, 4933 },
	{ (Il2CppRGCTXDataType)2, 1107 },
	{ (Il2CppRGCTXDataType)2, 1198 },
	{ (Il2CppRGCTXDataType)2, 1106 },
	{ (Il2CppRGCTXDataType)3, 13679 },
	{ (Il2CppRGCTXDataType)3, 4449 },
	{ (Il2CppRGCTXDataType)2, 933 },
	{ (Il2CppRGCTXDataType)2, 1195 },
	{ (Il2CppRGCTXDataType)2, 1249 },
	{ (Il2CppRGCTXDataType)2, 1301 },
	{ (Il2CppRGCTXDataType)3, 6524 },
	{ (Il2CppRGCTXDataType)3, 6526 },
	{ (Il2CppRGCTXDataType)2, 364 },
	{ (Il2CppRGCTXDataType)3, 6525 },
	{ (Il2CppRGCTXDataType)3, 6534 },
	{ (Il2CppRGCTXDataType)2, 1564 },
	{ (Il2CppRGCTXDataType)2, 2363 },
	{ (Il2CppRGCTXDataType)3, 11706 },
	{ (Il2CppRGCTXDataType)3, 6535 },
	{ (Il2CppRGCTXDataType)2, 1225 },
	{ (Il2CppRGCTXDataType)2, 1270 },
	{ (Il2CppRGCTXDataType)3, 4940 },
	{ (Il2CppRGCTXDataType)3, 13674 },
	{ (Il2CppRGCTXDataType)3, 6527 },
	{ (Il2CppRGCTXDataType)2, 1563 },
	{ (Il2CppRGCTXDataType)2, 2361 },
	{ (Il2CppRGCTXDataType)3, 11700 },
	{ (Il2CppRGCTXDataType)3, 4939 },
	{ (Il2CppRGCTXDataType)3, 6528 },
	{ (Il2CppRGCTXDataType)3, 13673 },
	{ (Il2CppRGCTXDataType)3, 6541 },
	{ (Il2CppRGCTXDataType)2, 1565 },
	{ (Il2CppRGCTXDataType)2, 2365 },
	{ (Il2CppRGCTXDataType)3, 11713 },
	{ (Il2CppRGCTXDataType)3, 6885 },
	{ (Il2CppRGCTXDataType)3, 3625 },
	{ (Il2CppRGCTXDataType)3, 4941 },
	{ (Il2CppRGCTXDataType)3, 3624 },
	{ (Il2CppRGCTXDataType)3, 6542 },
	{ (Il2CppRGCTXDataType)3, 13675 },
	{ (Il2CppRGCTXDataType)3, 4938 },
	{ (Il2CppRGCTXDataType)2, 525 },
	{ (Il2CppRGCTXDataType)3, 23 },
	{ (Il2CppRGCTXDataType)3, 10064 },
	{ (Il2CppRGCTXDataType)2, 2085 },
	{ (Il2CppRGCTXDataType)3, 10078 },
	{ (Il2CppRGCTXDataType)2, 698 },
	{ (Il2CppRGCTXDataType)3, 1305 },
	{ (Il2CppRGCTXDataType)3, 10070 },
	{ (Il2CppRGCTXDataType)3, 3600 },
	{ (Il2CppRGCTXDataType)2, 383 },
	{ (Il2CppRGCTXDataType)3, 10065 },
	{ (Il2CppRGCTXDataType)2, 2081 },
	{ (Il2CppRGCTXDataType)3, 1334 },
	{ (Il2CppRGCTXDataType)2, 712 },
	{ (Il2CppRGCTXDataType)2, 909 },
	{ (Il2CppRGCTXDataType)3, 3606 },
	{ (Il2CppRGCTXDataType)3, 10066 },
	{ (Il2CppRGCTXDataType)3, 3595 },
	{ (Il2CppRGCTXDataType)3, 3596 },
	{ (Il2CppRGCTXDataType)3, 3594 },
	{ (Il2CppRGCTXDataType)3, 3597 },
	{ (Il2CppRGCTXDataType)2, 905 },
	{ (Il2CppRGCTXDataType)2, 2772 },
	{ (Il2CppRGCTXDataType)3, 4937 },
	{ (Il2CppRGCTXDataType)3, 3599 },
	{ (Il2CppRGCTXDataType)2, 1177 },
	{ (Il2CppRGCTXDataType)3, 3598 },
	{ (Il2CppRGCTXDataType)2, 1110 },
	{ (Il2CppRGCTXDataType)2, 2736 },
	{ (Il2CppRGCTXDataType)2, 1204 },
	{ (Il2CppRGCTXDataType)2, 1253 },
	{ (Il2CppRGCTXDataType)3, 4465 },
	{ (Il2CppRGCTXDataType)2, 941 },
	{ (Il2CppRGCTXDataType)3, 5239 },
	{ (Il2CppRGCTXDataType)3, 5240 },
	{ (Il2CppRGCTXDataType)3, 5245 },
	{ (Il2CppRGCTXDataType)2, 1309 },
	{ (Il2CppRGCTXDataType)3, 5242 },
	{ (Il2CppRGCTXDataType)3, 14069 },
	{ (Il2CppRGCTXDataType)2, 912 },
	{ (Il2CppRGCTXDataType)3, 3617 },
	{ (Il2CppRGCTXDataType)1, 1172 },
	{ (Il2CppRGCTXDataType)2, 2744 },
	{ (Il2CppRGCTXDataType)3, 5241 },
	{ (Il2CppRGCTXDataType)1, 2744 },
	{ (Il2CppRGCTXDataType)1, 1309 },
	{ (Il2CppRGCTXDataType)2, 2790 },
	{ (Il2CppRGCTXDataType)2, 2744 },
	{ (Il2CppRGCTXDataType)3, 5246 },
	{ (Il2CppRGCTXDataType)3, 5244 },
	{ (Il2CppRGCTXDataType)3, 5243 },
	{ (Il2CppRGCTXDataType)2, 260 },
	{ (Il2CppRGCTXDataType)3, 3626 },
	{ (Il2CppRGCTXDataType)2, 370 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	95,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	28,
	s_rgctxIndices,
	132,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
