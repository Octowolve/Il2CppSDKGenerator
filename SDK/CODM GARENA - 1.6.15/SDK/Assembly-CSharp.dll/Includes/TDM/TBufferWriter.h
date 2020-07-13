#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TDM {

class TBufferWriter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TDM", "TBufferWriter"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_Reserve() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBufferData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetBufferData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = void> T Write(bool b) {
		return ((T (*)(TBufferWriter*, bool))(Il2CppBase() + 0x4652D68))(this, b);
	}
	template <typename T = void> T Write_1(unsigned char c) {
		return ((T (*)(TBufferWriter*, unsigned char))(Il2CppBase() + 0x4652E2C))(this, c);
	}
	template <typename T = void> T Write_2(int16_t s) {
		return ((T (*)(TBufferWriter*, int16_t))(Il2CppBase() + 0x465303C))(this, s);
	}
	template <typename T = void> T Write_3(uint16_t s) {
		return ((T (*)(TBufferWriter*, uint16_t))(Il2CppBase() + 0x4653124))(this, s);
	}
	template <typename T = void> T Write_4(int32_t i) {
		return ((T (*)(TBufferWriter*, int32_t))(Il2CppBase() + 0x465320C))(this, i);
	}
	template <typename T = void> T Write_5(uint32_t i) {
		return ((T (*)(TBufferWriter*, uint32_t))(Il2CppBase() + 0x46532F4))(this, i);
	}
	template <typename T = void> T Write_6(int64_t l) {
		return ((T (*)(TBufferWriter*, int64_t))(Il2CppBase() + 0x46533DC))(this, l);
	}
	template <typename T = void> T Write_7(uint64_t l) {
		return ((T (*)(TBufferWriter*, uint64_t))(Il2CppBase() + 0x46534E8))(this, l);
	}
	template <typename T = void> T Write_8(Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(TBufferWriter*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x46535F4))(this, buffer);
	}
	template <typename T = void> T Write_9(Il2CppString* s) {
		return ((T (*)(TBufferWriter*, Il2CppString*))(Il2CppBase() + 0x46536E8))(this, s);
	}
	template <typename T = void> T Write_10(Il2CppList<uintptr_t>* v) {
		return ((T (*)(TBufferWriter*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x282C0F4))(this, v);
	}
	template <typename T = void> T Write_11(Il2CppDictionary<uintptr_t, uintptr_t>* d) {
		return ((T (*)(TBufferWriter*, Il2CppDictionary<uintptr_t, uintptr_t>*))(Il2CppBase() + 0x282BC5C))(this, d);
	}
	template <typename T = void> T Write_12(uintptr_t ab) {
		return ((T (*)(TBufferWriter*, uintptr_t))(Il2CppBase() + 0x4653830))(this, ab);
	}
	template <typename T = void> T Write_13(uintptr_t o) {
		return ((T (*)(TBufferWriter*, uintptr_t))(Il2CppBase() + 0x46538E8))(this, o);
	}
	template <typename T = void> T Reserve(int32_t len) {
		return ((T (*)(TBufferWriter*, int32_t))(Il2CppBase() + 0x4652F08))(this, len);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(TBufferWriter*))(Il2CppBase() + 0x4654088))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetBufferData() {
		return ((T (*)(TBufferWriter*))(Il2CppBase() + 0x4651460))(this);
	}
	template <typename T = int32_t> T GetBufferData_1(Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(TBufferWriter*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4654164))(this, buffer);
	}

};

}
