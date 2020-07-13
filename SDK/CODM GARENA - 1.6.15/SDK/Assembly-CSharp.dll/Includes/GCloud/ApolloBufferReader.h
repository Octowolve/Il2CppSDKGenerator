#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class ApolloBufferReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "ApolloBufferReader"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix4_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix5_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix6_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix7_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix8_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix9_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix10_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ReadList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_ReadList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix11_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix12_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix13_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEof() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ApolloBufferReader*))(Il2CppBase() + 0x4515A38))(this);
	}
	template <typename T = void> T ResetPosition() {
		return ((T (*)(ApolloBufferReader*))(Il2CppBase() + 0x4515ADC))(this);
	}
	template <typename T = bool> T Read(uintptr_t b) {
		return ((T (*)(ApolloBufferReader*, uintptr_t))(Il2CppBase() + 0x4515B80))(this, b);
	}
	template <typename T = unsigned char> T Read_1(uintptr_t c) {
		return ((T (*)(ApolloBufferReader*, uintptr_t))(Il2CppBase() + 0x4515C5C))(this, c);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Read_2(Il2CppArray<uintptr_t>* buf) {
		return ((T (*)(ApolloBufferReader*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4515D4C))(this, buf);
	}
	template <typename T = int32_t> T ReadArray(Il2CppArray<uintptr_t>* buf) {
		return ((T (*)(ApolloBufferReader*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4515FF8))(this, buf);
	}
	template <typename T = int16_t> T Read_3(uintptr_t v) {
		return ((T (*)(ApolloBufferReader*, uintptr_t))(Il2CppBase() + 0x4516140))(this, v);
	}
	template <typename T = uint16_t> T Read_4(uintptr_t v) {
		return ((T (*)(ApolloBufferReader*, uintptr_t))(Il2CppBase() + 0x45163B4))(this, v);
	}
	template <typename T = int32_t> T Read_5(uintptr_t v) {
		return ((T (*)(ApolloBufferReader*, uintptr_t))(Il2CppBase() + 0x4515ECC))(this, v);
	}
	template <typename T = uint32_t> T Read_6(uintptr_t v) {
		return ((T (*)(ApolloBufferReader*, uintptr_t))(Il2CppBase() + 0x4516770))(this, v);
	}
	template <typename T = int64_t> T Read_7(uintptr_t v) {
		return ((T (*)(ApolloBufferReader*, uintptr_t))(Il2CppBase() + 0x45169E4))(this, v);
	}
	template <typename T = uint64_t> T Read_8(uintptr_t v) {
		return ((T (*)(ApolloBufferReader*, uintptr_t))(Il2CppBase() + 0x4516CA0))(this, v);
	}
	template <typename T = Il2CppString*> T Read_9(uintptr_t s) {
		return ((T (*)(ApolloBufferReader*, uintptr_t))(Il2CppBase() + 0x4516F5C))(this, s);
	}
	template <typename T = void*> T Read_10(uintptr_t v) {
		return ((T (*)(ApolloBufferReader*, uintptr_t))(Il2CppBase() + 0x21D1328))(this, v);
	}
	template <typename T = uintptr_t> T ReadList(uintptr_t l) {
		return ((T (*)(ApolloBufferReader*, uintptr_t))(Il2CppBase() + 0x21DCCE8))(this, l);
	}
	template <typename T = int32_t> T ReadList_1(uintptr_t list) {
		return ((T (*)(ApolloBufferReader*, uintptr_t))(Il2CppBase() + 0x45170C8))(this, list);
	}
	template <typename T = int32_t> T ReadList_2(uintptr_t list, int32_t count) {
		return ((T (*)(ApolloBufferReader*, uintptr_t, int32_t))(Il2CppBase() + 0x45172FC))(this, list, count);
	}
	template <typename T = void*> T Read_11(uintptr_t map) {
		return ((T (*)(ApolloBufferReader*, uintptr_t))(Il2CppBase() + 0x45F50DC))(this, map);
	}
	template <typename T = uintptr_t> T ReadMap(uintptr_t map) {
		return ((T (*)(ApolloBufferReader*, uintptr_t))(Il2CppBase() + 0x21D8D54))(this, map);
	}
	template <typename T = uintptr_t> T Read_12(uintptr_t ab) {
		return ((T (*)(ApolloBufferReader*, uintptr_t))(Il2CppBase() + 0x4517520))(this, ab);
	}
	template <typename T = uintptr_t> T Read_13(uintptr_t o) {
		return ((T (*)(ApolloBufferReader*, uintptr_t))(Il2CppBase() + 0x1E725D8))(this, o);
	}
	template <typename T = bool> T IsEof() {
		return ((T (*)(ApolloBufferReader*))(Il2CppBase() + 0x45175E4))(this);
	}

};

}
