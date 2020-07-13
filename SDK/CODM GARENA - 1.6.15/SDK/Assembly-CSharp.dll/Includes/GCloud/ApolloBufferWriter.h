#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class ApolloBufferWriter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "ApolloBufferWriter"));
	}

	template <typename T = uintptr_t> T& stream() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& writer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix4_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix5_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix6_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix7_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix8_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix9_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix10_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix11_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix12_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix13_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix14_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBufferData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix15_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reserve() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = void> T Write(bool b) {
		return ((T (*)(ApolloBufferWriter*, bool))(Il2CppBase() + 0x4517920))(this, b);
	}
	template <typename T = void> T Write_1(unsigned char c) {
		return ((T (*)(ApolloBufferWriter*, unsigned char))(Il2CppBase() + 0x45179E4))(this, c);
	}
	template <typename T = void> T Write_2(int16_t s) {
		return ((T (*)(ApolloBufferWriter*, int16_t))(Il2CppBase() + 0x4517BF4))(this, s);
	}
	template <typename T = void> T Write_3(uint16_t s) {
		return ((T (*)(ApolloBufferWriter*, uint16_t))(Il2CppBase() + 0x4517CDC))(this, s);
	}
	template <typename T = void> T Write_4(int32_t i) {
		return ((T (*)(ApolloBufferWriter*, int32_t))(Il2CppBase() + 0x4517DC4))(this, i);
	}
	template <typename T = void> T Write_5(uint32_t i) {
		return ((T (*)(ApolloBufferWriter*, uint32_t))(Il2CppBase() + 0x4517EAC))(this, i);
	}
	template <typename T = void> T Write_6(int64_t l) {
		return ((T (*)(ApolloBufferWriter*, int64_t))(Il2CppBase() + 0x4517F94))(this, l);
	}
	template <typename T = void> T Write_7(uint64_t l) {
		return ((T (*)(ApolloBufferWriter*, uint64_t))(Il2CppBase() + 0x45180A0))(this, l);
	}
	template <typename T = void> T Write_8(Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(ApolloBufferWriter*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x45181AC))(this, buffer);
	}
	template <typename T = void> T Write_9(Il2CppArray<uintptr_t>* buffer, int32_t len) {
		return ((T (*)(ApolloBufferWriter*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4518260))(this, buffer, len);
	}
	template <typename T = void> T Write_10(Il2CppString* s) {
		return ((T (*)(ApolloBufferWriter*, Il2CppString*))(Il2CppBase() + 0x4518384))(this, s);
	}
	template <typename T = void> T Write_11(Il2CppList<uintptr_t>* v) {
		return ((T (*)(ApolloBufferWriter*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1E87488))(this, v);
	}
	template <typename T = void> T Write_12(Il2CppList<uintptr_t>* v, int32_t count) {
		return ((T (*)(ApolloBufferWriter*, Il2CppList<uintptr_t>*, int32_t))(Il2CppBase() + 0x1E87624))(this, v, count);
	}
	template <typename T = void> T Write_13(Il2CppDictionary<uintptr_t, uintptr_t>* d) {
		return ((T (*)(ApolloBufferWriter*, Il2CppDictionary<uintptr_t, uintptr_t>*))(Il2CppBase() + 0x1E87160))(this, d);
	}
	template <typename T = void> T Write_14(uintptr_t ab) {
		return ((T (*)(ApolloBufferWriter*, uintptr_t))(Il2CppBase() + 0x45185E4))(this, ab);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetBufferData() {
		return ((T (*)(ApolloBufferWriter*))(Il2CppBase() + 0x451510C))(this);
	}
	template <typename T = void> T Write_15(uintptr_t o) {
		return ((T (*)(ApolloBufferWriter*, uintptr_t))(Il2CppBase() + 0x451869C))(this, o);
	}
	template <typename T = void> T Reserve(int32_t len) {
		return ((T (*)(ApolloBufferWriter*, int32_t))(Il2CppBase() + 0x4517AC0))(this, len);
	}

};

}
