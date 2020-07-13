#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Globalization.Unicode {

class MSCompatUnicodeTable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Globalization.Unicode", "MSCompatUnicodeTable"));
	}

	template <typename T = int32_t> static T& MaxExpansionLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ignorableFlags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& categories() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& level1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& level2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& level3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& cjkCHScategory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& cjkCHTcategory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& cjkJAcategory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& cjkKOcategory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& cjkCHSlv1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& cjkCHTlv1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& cjkJAlv1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& cjkKOlv1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& cjkKOlv2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& tailoringArr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& tailoringInfos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& forLock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = bool> static T& isReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = uintptr_t> static T GetTailoringInfo(int32_t lcid) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3F8C3C4))(0, lcid);
	}
	template <typename T = void> static T BuildTailoringTables(uintptr_t culture, uintptr_t t, Il2CppArray<uintptr_t>* contractions, Il2CppArray<uintptr_t>* diacriticals) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3F8C588))(0, culture, t, contractions, diacriticals);
	}
	template <typename T = void> static T SetCJKReferences(Il2CppString* name, uintptr_t cjkIndexer, uintptr_t catTable, uintptr_t lv1Table, uintptr_t lv2Indexer, uintptr_t lv2Table) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F8CE14))(0, name, cjkIndexer, catTable, lv1Table, lv2Indexer, lv2Table);
	}
	template <typename T = unsigned char> static T Category(int32_t cp) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3F8D3E4))(0, cp);
	}
	template <typename T = unsigned char> static T Level1(int32_t cp) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3F8D50C))(0, cp);
	}
	template <typename T = unsigned char> static T Level2(int32_t cp) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3F8D634))(0, cp);
	}
	template <typename T = unsigned char> static T Level3(int32_t cp) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3F8D75C))(0, cp);
	}
	template <typename T = bool> static T IsIgnorable(int32_t cp, unsigned char flag) {
		return ((T (*)(void *, int32_t, unsigned char))(Il2CppBase() + 0x3F8D884))(0, cp, flag);
	}
	template <typename T = bool> static T IsIgnorableNonSpacing(int32_t cp) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3F8DA44))(0, cp);
	}
	template <typename T = int32_t> static T ToKanaTypeInsensitive(int32_t i) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3F8DAE8))(0, i);
	}
	template <typename T = int32_t> static T ToWidthCompat(int32_t i) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3F8DB00))(0, i);
	}
	template <typename T = bool> static T HasSpecialWeight(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x3F8DC6C))(0, c);
	}
	template <typename T = bool> static T IsHalfWidthKana(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x3F8DCF0))(0, c);
	}
	template <typename T = bool> static T IsHiragana(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x3F8DD08))(0, c);
	}
	template <typename T = bool> static T IsJapaneseSmallLetter(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x3F8DD24))(0, c);
	}
	template <typename T = bool> static T get_IsReady() {
		return ((T (*)(void *))(Il2CppBase() + 0x3F8DE20))(0);
	}
	template <typename T = uintptr_t> static T GetResource(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3F8C2A0))(0, name);
	}
	template <typename T = uint32_t> static T UInt32FromBytePtr(uintptr_t raw, uint32_t idx) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x3F8C36C))(0, raw, idx);
	}
	template <typename T = void> static T FillCJK(Il2CppString* culture, uintptr_t cjkIndexer, uintptr_t catTable, uintptr_t lv1Table, uintptr_t lv2Indexer, uintptr_t lv2Table) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F8DED0))(0, culture, cjkIndexer, catTable, lv1Table, lv2Indexer, lv2Table);
	}
	template <typename T = void> static T FillCJKCore(Il2CppString* culture, uintptr_t cjkIndexer, uintptr_t catTable, uintptr_t lv1Table, uintptr_t cjkLv2Indexer, uintptr_t lv2Table) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F8E064))(0, culture, cjkIndexer, catTable, lv1Table, cjkLv2Indexer, lv2Table);
	}

};

}
