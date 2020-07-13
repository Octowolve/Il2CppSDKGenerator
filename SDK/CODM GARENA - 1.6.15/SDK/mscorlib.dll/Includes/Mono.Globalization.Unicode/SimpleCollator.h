#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Globalization.Unicode {

class SimpleCollator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Globalization.Unicode", "SimpleCollator"));
	}

	template <typename T = bool> static T& QuickCheckDisabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& invariant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& textInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& frenchSort() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& cjkCatTable() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& cjkLv1Table() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& cjkIndexer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& cjkLv2Table() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& cjkLv2Indexer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& lcid() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& contractions() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& level2Maps() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& unsafeFlags() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T SetCJKTable(uintptr_t culture, uintptr_t cjkIndexer, uintptr_t catTable, uintptr_t lv1Table, uintptr_t lv2Indexer, uintptr_t lv2Table) {
		return ((T (*)(SimpleCollator*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F8F808))(this, culture, cjkIndexer, catTable, lv1Table, lv2Indexer, lv2Table);
	}
	template <typename T = uintptr_t> static T GetNeutralCulture(uintptr_t info) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3F8FAA0))(0, info);
	}
	template <typename T = unsigned char> T Category(int32_t cp) {
		return ((T (*)(SimpleCollator*, int32_t))(Il2CppBase() + 0x3F8FB34))(this, cp);
	}
	template <typename T = unsigned char> T Level1(int32_t cp) {
		return ((T (*)(SimpleCollator*, int32_t))(Il2CppBase() + 0x3F8FC34))(this, cp);
	}
	template <typename T = unsigned char> T Level2(int32_t cp, uintptr_t ext) {
		return ((T (*)(SimpleCollator*, int32_t, uintptr_t))(Il2CppBase() + 0x3F8FD34))(this, cp, ext);
	}
	template <typename T = bool> static T IsHalfKana(int32_t cp, uintptr_t opt) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x3F8FF30))(0, cp, opt);
	}
	template <typename T = uintptr_t> T GetContraction(Il2CppString* s, int32_t start, int32_t end) {
		return ((T (*)(SimpleCollator*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x3F8FFEC))(this, s, start, end);
	}
	template <typename T = uintptr_t> T GetContraction_1(Il2CppString* s, int32_t start, int32_t end, Il2CppArray<uintptr_t>* clist) {
		return ((T (*)(SimpleCollator*, Il2CppString*, int32_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3F90110))(this, s, start, end, clist);
	}
	template <typename T = uintptr_t> T GetTailContraction(Il2CppString* s, int32_t start, int32_t end) {
		return ((T (*)(SimpleCollator*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x3F90278))(this, s, start, end);
	}
	template <typename T = uintptr_t> T GetTailContraction_1(Il2CppString* s, int32_t start, int32_t end, Il2CppArray<uintptr_t>* clist) {
		return ((T (*)(SimpleCollator*, Il2CppString*, int32_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3F9039C))(this, s, start, end, clist);
	}
	template <typename T = int32_t> T FilterOptions(int32_t i, uintptr_t opt) {
		return ((T (*)(SimpleCollator*, int32_t, uintptr_t))(Il2CppBase() + 0x3F90664))(this, i, opt);
	}
	template <typename T = uintptr_t> T GetExtenderType(int32_t i) {
		return ((T (*)(SimpleCollator*, int32_t))(Il2CppBase() + 0x3F907DC))(this, i);
	}
	template <typename T = unsigned char> static T ToDashTypeValue(uintptr_t ext, uintptr_t opt) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F908DC))(0, ext, opt);
	}
	template <typename T = int32_t> T FilterExtender(int32_t i, uintptr_t ext, uintptr_t opt) {
		return ((T (*)(SimpleCollator*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F90904))(this, i, ext, opt);
	}
	template <typename T = bool> static T IsIgnorable(int32_t i, uintptr_t opt) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x3F90B8C))(0, i, opt);
	}
	template <typename T = bool> T IsSafe(int32_t i) {
		return ((T (*)(SimpleCollator*, int32_t))(Il2CppBase() + 0x3F90C4C))(this, i);
	}
	template <typename T = uintptr_t> T GetSortKey(Il2CppString* s, uintptr_t options) {
		return ((T (*)(SimpleCollator*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3F90CC4))(this, s, options);
	}
	template <typename T = uintptr_t> T GetSortKey_1(Il2CppString* s, int32_t start, int32_t length, uintptr_t options) {
		return ((T (*)(SimpleCollator*, Il2CppString*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3F90D1C))(this, s, start, length, options);
	}
	template <typename T = void> T GetSortKey_2(Il2CppString* s, int32_t start, int32_t end, uintptr_t buf, uintptr_t opt) {
		return ((T (*)(SimpleCollator*, Il2CppString*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F91100))(this, s, start, end, buf, opt);
	}
	template <typename T = void> T FillSortKeyRaw(int32_t i, uintptr_t ext, uintptr_t buf, uintptr_t opt) {
		return ((T (*)(SimpleCollator*, int32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9164C))(this, i, ext, buf, opt);
	}
	template <typename T = void> T FillSurrogateSortKeyRaw(int32_t i, uintptr_t buf) {
		return ((T (*)(SimpleCollator*, int32_t, uintptr_t))(Il2CppBase() + 0x3F91C50))(this, i, buf);
	}
	template <typename T = int32_t> T CompareOrdinal(Il2CppString* s1, int32_t idx1, int32_t len1, Il2CppString* s2, int32_t idx2, int32_t len2) {
		return ((T (*)(SimpleCollator*, Il2CppString*, int32_t, int32_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x3F91DCC))(this, s1, idx1, len1, s2, idx2, len2);
	}
	template <typename T = int32_t> T CompareQuick(Il2CppString* s1, int32_t idx1, int32_t len1, Il2CppString* s2, int32_t idx2, int32_t len2, uintptr_t* sourceConsumed, uintptr_t* targetConsumed, bool immediateBreakup) {
		return ((T (*)(SimpleCollator*, Il2CppString*, int32_t, int32_t, Il2CppString*, int32_t, int32_t, uintptr_t*, uintptr_t*, bool))(Il2CppBase() + 0x3F922C8))(this, s1, idx1, len1, s2, idx2, len2, sourceConsumed, targetConsumed, immediateBreakup);
	}
	template <typename T = int32_t> T CompareOrdinalIgnoreCase(Il2CppString* s1, int32_t idx1, int32_t len1, Il2CppString* s2, int32_t idx2, int32_t len2) {
		return ((T (*)(SimpleCollator*, Il2CppString*, int32_t, int32_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x3F92BE8))(this, s1, idx1, len1, s2, idx2, len2);
	}
	template <typename T = int32_t> T Compare(Il2CppString* s1, int32_t idx1, int32_t len1, Il2CppString* s2, int32_t idx2, int32_t len2, uintptr_t options) {
		return ((T (*)(SimpleCollator*, Il2CppString*, int32_t, int32_t, Il2CppString*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3F93198))(this, s1, idx1, len1, s2, idx2, len2, options);
	}
	template <typename T = void> T ClearBuffer(uintptr_t buffer, int32_t size) {
		return ((T (*)(SimpleCollator*, uintptr_t, int32_t))(Il2CppBase() + 0x3F91630))(this, buffer, size);
	}
	template <typename T = bool> T QuickCheckPossible(Il2CppString* s1, int32_t idx1, int32_t end1, Il2CppString* s2, int32_t idx2, int32_t end2) {
		return ((T (*)(SimpleCollator*, Il2CppString*, int32_t, int32_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x3F93344))(this, s1, idx1, end1, s2, idx2, end2);
	}
	template <typename T = int32_t> T CompareInternal(Il2CppString* s1, int32_t idx1, int32_t len1, Il2CppString* s2, int32_t idx2, int32_t len2, uintptr_t* targetConsumed, uintptr_t* sourceConsumed, bool skipHeadingExtenders, bool immediateBreakup, uintptr_t ctx) {
		return ((T (*)(SimpleCollator*, Il2CppString*, int32_t, int32_t, Il2CppString*, int32_t, int32_t, uintptr_t*, uintptr_t*, bool, bool, uintptr_t))(Il2CppBase() + 0x3F9334C))(this, s1, idx1, len1, s2, idx2, len2, targetConsumed, sourceConsumed, skipHeadingExtenders, immediateBreakup, ctx);
	}
	template <typename T = int32_t> T CompareFlagPair(bool b1, bool b2) {
		return ((T (*)(SimpleCollator*, bool, bool))(Il2CppBase() + 0x3F94C30))(this, b1, b2);
	}
	template <typename T = bool> T IsPrefix(Il2CppString* src, Il2CppString* target, uintptr_t opt) {
		return ((T (*)(SimpleCollator*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3F94C50))(this, src, target, opt);
	}
	template <typename T = bool> T IsPrefix_1(Il2CppString* s, Il2CppString* target, int32_t start, int32_t length, uintptr_t opt) {
		return ((T (*)(SimpleCollator*, Il2CppString*, Il2CppString*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3F94CAC))(this, s, target, start, length, opt);
	}
	template <typename T = bool> T IsPrefix_2(Il2CppString* s, Il2CppString* target, int32_t start, int32_t length, bool skipHeadingExtenders, uintptr_t ctx) {
		return ((T (*)(SimpleCollator*, Il2CppString*, Il2CppString*, int32_t, int32_t, bool, uintptr_t))(Il2CppBase() + 0x3F94DDC))(this, s, target, start, length, skipHeadingExtenders, ctx);
	}
	template <typename T = bool> T IsSuffix(Il2CppString* src, Il2CppString* target, uintptr_t opt) {
		return ((T (*)(SimpleCollator*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3F94E78))(this, src, target, opt);
	}
	template <typename T = bool> T IsSuffix_1(Il2CppString* s, Il2CppString* target, int32_t start, int32_t length, uintptr_t opt) {
		return ((T (*)(SimpleCollator*, Il2CppString*, Il2CppString*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3F94EE4))(this, s, target, start, length, opt);
	}
	template <typename T = int32_t> T QuickIndexOf(Il2CppString* s, Il2CppString* target, int32_t start, int32_t length, uintptr_t* testWasUnable) {
		return ((T (*)(SimpleCollator*, Il2CppString*, Il2CppString*, int32_t, int32_t, uintptr_t*))(Il2CppBase() + 0x3F95120))(this, s, target, start, length, testWasUnable);
	}
	template <typename T = int32_t> T IndexOf(Il2CppString* s, Il2CppString* target, int32_t start, int32_t length, uintptr_t opt) {
		return ((T (*)(SimpleCollator*, Il2CppString*, Il2CppString*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3F952C0))(this, s, target, start, length, opt);
	}
	template <typename T = int32_t> T IndexOfOrdinal(Il2CppString* s, Il2CppString* target, int32_t start, int32_t length) {
		return ((T (*)(SimpleCollator*, Il2CppString*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x3F954C4))(this, s, target, start, length);
	}
	template <typename T = int32_t> T IndexOfOrdinalIgnoreCase(Il2CppString* s, Il2CppString* target, int32_t start, int32_t length) {
		return ((T (*)(SimpleCollator*, Il2CppString*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x3F955CC))(this, s, target, start, length);
	}
	template <typename T = int32_t> T IndexOfSortKey(Il2CppString* s, int32_t start, int32_t length, uintptr_t sortkey, char target, int32_t ti, bool noLv4, uintptr_t ctx) {
		return ((T (*)(SimpleCollator*, Il2CppString*, int32_t, int32_t, uintptr_t, char, int32_t, bool, uintptr_t))(Il2CppBase() + 0x3F95CD4))(this, s, start, length, sortkey, target, ti, noLv4, ctx);
	}
	template <typename T = int32_t> T IndexOf_1(Il2CppString* s, Il2CppString* target, int32_t start, int32_t length, uintptr_t targetSortKey, uintptr_t ctx) {
		return ((T (*)(SimpleCollator*, Il2CppString*, Il2CppString*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9572C))(this, s, target, start, length, targetSortKey, ctx);
	}
	template <typename T = int32_t> T LastIndexOf(Il2CppString* s, Il2CppString* target, int32_t start, int32_t length, uintptr_t opt) {
		return ((T (*)(SimpleCollator*, Il2CppString*, Il2CppString*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3F94FB8))(this, s, target, start, length, opt);
	}
	template <typename T = int32_t> T LastIndexOfOrdinal(Il2CppString* s, Il2CppString* target, int32_t start, int32_t length) {
		return ((T (*)(SimpleCollator*, Il2CppString*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x3F95F1C))(this, s, target, start, length);
	}
	template <typename T = int32_t> T LastIndexOfOrdinalIgnoreCase(Il2CppString* s, Il2CppString* target, int32_t start, int32_t length) {
		return ((T (*)(SimpleCollator*, Il2CppString*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x3F960A4))(this, s, target, start, length);
	}
	template <typename T = int32_t> T LastIndexOfSortKey(Il2CppString* s, int32_t start, int32_t orgStart, int32_t length, uintptr_t sortkey, int32_t ti, bool noLv4, uintptr_t ctx) {
		return ((T (*)(SimpleCollator*, Il2CppString*, int32_t, int32_t, int32_t, uintptr_t, int32_t, bool, uintptr_t))(Il2CppBase() + 0x3F96970))(this, s, start, orgStart, length, sortkey, ti, noLv4, ctx);
	}
	template <typename T = int32_t> T LastIndexOf_1(Il2CppString* s, Il2CppString* target, int32_t start, int32_t length, uintptr_t targetSortKey, uintptr_t ctx) {
		return ((T (*)(SimpleCollator*, Il2CppString*, Il2CppString*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F962BC))(this, s, target, start, length, targetSortKey, ctx);
	}
	template <typename T = bool> T MatchesForward(Il2CppString* s, uintptr_t idx, int32_t end, int32_t ti, uintptr_t sortkey, bool noLv4, uintptr_t ctx) {
		return ((T (*)(SimpleCollator*, Il2CppString*, uintptr_t, int32_t, int32_t, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x3F95D50))(this, s, idx, end, ti, sortkey, noLv4, ctx);
	}
	template <typename T = bool> T MatchesForwardCore(Il2CppString* s, uintptr_t idx, int32_t end, int32_t ti, uintptr_t sortkey, bool noLv4, uintptr_t ext, uintptr_t ct, uintptr_t ctx) {
		return ((T (*)(SimpleCollator*, Il2CppString*, uintptr_t, int32_t, int32_t, uintptr_t, bool, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F96BCC))(this, s, idx, end, ti, sortkey, noLv4, ext, ct, ctx);
	}
	template <typename T = bool> T MatchesPrimitive(uintptr_t opt, uintptr_t source, int32_t si, uintptr_t ext, uintptr_t target, int32_t ti, bool noLv4) {
		return ((T (*)(SimpleCollator*, uintptr_t, uintptr_t, int32_t, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x3F9706C))(this, opt, source, si, ext, target, ti, noLv4);
	}
	template <typename T = bool> T MatchesBackward(Il2CppString* s, uintptr_t idx, int32_t end, int32_t orgStart, int32_t ti, uintptr_t sortkey, bool noLv4, uintptr_t ctx) {
		return ((T (*)(SimpleCollator*, Il2CppString*, uintptr_t, int32_t, int32_t, int32_t, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x3F969F8))(this, s, idx, end, orgStart, ti, sortkey, noLv4, ctx);
	}
	template <typename T = bool> T MatchesBackwardCore(Il2CppString* s, uintptr_t idx, int32_t end, int32_t orgStart, int32_t ti, uintptr_t sortkey, bool noLv4, uintptr_t ext, uintptr_t ct, uintptr_t ctx) {
		return ((T (*)(SimpleCollator*, Il2CppString*, uintptr_t, int32_t, int32_t, int32_t, uintptr_t, bool, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F973B8))(this, s, idx, end, orgStart, ti, sortkey, noLv4, ext, ct, ctx);
	}

};

}
