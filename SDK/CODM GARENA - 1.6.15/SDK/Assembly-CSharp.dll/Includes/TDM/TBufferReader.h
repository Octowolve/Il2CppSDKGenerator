#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TDM {

class TBufferReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TDM", "TBufferReader"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& buffer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& position() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix4_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix5_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix6_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix7_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix8_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix9_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix10_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix11_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix12_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix13_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(TBufferReader*))(Il2CppBase() + 0x4651D8C))(this);
	}
	template <typename T = bool> T Read(uintptr_t b) {
		return ((T (*)(TBufferReader*, uintptr_t))(Il2CppBase() + 0x4651E30))(this, b);
	}
	template <typename T = unsigned char> T Read_1(uintptr_t c) {
		return ((T (*)(TBufferReader*, uintptr_t))(Il2CppBase() + 0x4651F0C))(this, c);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Read_2(Il2CppArray<uintptr_t>* buf) {
		return ((T (*)(TBufferReader*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4651FFC))(this, buf);
	}
	template <typename T = int16_t> T Read_3(uintptr_t v) {
		return ((T (*)(TBufferReader*, uintptr_t))(Il2CppBase() + 0x46522A8))(this, v);
	}
	template <typename T = uint16_t> T Read_4(uintptr_t v) {
		return ((T (*)(TBufferReader*, uintptr_t))(Il2CppBase() + 0x46523D4))(this, v);
	}
	template <typename T = int32_t> T Read_5(uintptr_t v) {
		return ((T (*)(TBufferReader*, uintptr_t))(Il2CppBase() + 0x465217C))(this, v);
	}
	template <typename T = uint32_t> T Read_6(uintptr_t v) {
		return ((T (*)(TBufferReader*, uintptr_t))(Il2CppBase() + 0x4652500))(this, v);
	}
	template <typename T = int64_t> T Read_7(uintptr_t v) {
		return ((T (*)(TBufferReader*, uintptr_t))(Il2CppBase() + 0x465262C))(this, v);
	}
	template <typename T = uint64_t> T Read_8(uintptr_t v) {
		return ((T (*)(TBufferReader*, uintptr_t))(Il2CppBase() + 0x4652778))(this, v);
	}
	template <typename T = Il2CppString*> T Read_9(uintptr_t s) {
		return ((T (*)(TBufferReader*, uintptr_t))(Il2CppBase() + 0x46528C4))(this, s);
	}
	template <typename T = void*> T Read_10(uintptr_t v) {
		return ((T (*)(TBufferReader*, uintptr_t))(Il2CppBase() + 0x21D1470))(this, v);
	}
	template <typename T = uintptr_t> T ReadList(uintptr_t l) {
		return ((T (*)(TBufferReader*, uintptr_t))(Il2CppBase() + 0x21DCFDC))(this, l);
	}
	template <typename T = void*> T Read_11(uintptr_t map) {
		return ((T (*)(TBufferReader*, uintptr_t))(Il2CppBase() + 0x45F524C))(this, map);
	}
	template <typename T = uintptr_t> T ReadMap(uintptr_t map) {
		return ((T (*)(TBufferReader*, uintptr_t))(Il2CppBase() + 0x21D9180))(this, map);
	}
	template <typename T = uintptr_t> T Read_12(uintptr_t ab) {
		return ((T (*)(TBufferReader*, uintptr_t))(Il2CppBase() + 0x4652A30))(this, ab);
	}
	template <typename T = uintptr_t> T Read_13(uintptr_t o) {
		return ((T (*)(TBufferReader*, uintptr_t))(Il2CppBase() + 0x1E7454C))(this, o);
	}

};

}
