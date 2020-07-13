#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloudTdr {

class TdrReadBuf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloudTdr", "TdrReadBuf"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& beginPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& position() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& length() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsNetEndian() {
		return *(T*)((uintptr_t)this + 0x14);
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
	template <typename T = uintptr_t> static T& __Hotfix0_reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getUsedSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getTotalSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getLeftSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_disableEndian() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_readInt8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_readUInt8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_readInt16() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_readUInt16() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_readInt32() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_readUInt32() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_readInt64() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_readUInt64() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_readFloat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_readDouble() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_readVarUInt16() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_readVarInt16() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_readVarUInt32() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_readVarInt32() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_readVarUInt64() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_readVarInt64() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_skipForward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_readCString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_readWString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_readInt8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_readUInt8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_readInt16() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_readUInt16() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_readInt32() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_readUInt32() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_readInt64() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_readUInt64() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_readFloat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_readDouble() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_readCString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_readWString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_toHexStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_toHexStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}

	template <typename T = void> T reset() {
		return ((T (*)(TdrReadBuf*))(Il2CppBase() + 0x444BB34))(this);
	}
	template <typename T = void> T set(Il2CppArray<uintptr_t>* ptr, int32_t len) {
		return ((T (*)(TdrReadBuf*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x444B988))(this, ptr, len);
	}
	template <typename T = int32_t> T getUsedSize() {
		return ((T (*)(TdrReadBuf*))(Il2CppBase() + 0x444BBE8))(this);
	}
	template <typename T = int32_t> T getTotalSize() {
		return ((T (*)(TdrReadBuf*))(Il2CppBase() + 0x444BC88))(this);
	}
	template <typename T = int32_t> T getLeftSize() {
		return ((T (*)(TdrReadBuf*))(Il2CppBase() + 0x444BD28))(this);
	}
	template <typename T = void> T disableEndian() {
		return ((T (*)(TdrReadBuf*))(Il2CppBase() + 0x444BDD0))(this);
	}
	template <typename T = uintptr_t> T readInt8(uintptr_t dest) {
		return ((T (*)(TdrReadBuf*, uintptr_t))(Il2CppBase() + 0x444BE74))(this, dest);
	}
	template <typename T = uintptr_t> T readUInt8(uintptr_t dest) {
		return ((T (*)(TdrReadBuf*, uintptr_t))(Il2CppBase() + 0x444BF44))(this, dest);
	}
	template <typename T = uintptr_t> T readInt16(uintptr_t dest) {
		return ((T (*)(TdrReadBuf*, uintptr_t))(Il2CppBase() + 0x444C03C))(this, dest);
	}
	template <typename T = uintptr_t> T readUInt16(uintptr_t dest) {
		return ((T (*)(TdrReadBuf*, uintptr_t))(Il2CppBase() + 0x444C21C))(this, dest);
	}
	template <typename T = uintptr_t> T readInt32(uintptr_t dest) {
		return ((T (*)(TdrReadBuf*, uintptr_t))(Il2CppBase() + 0x444C2EC))(this, dest);
	}
	template <typename T = uintptr_t> T readUInt32(uintptr_t dest) {
		return ((T (*)(TdrReadBuf*, uintptr_t))(Il2CppBase() + 0x444C4CC))(this, dest);
	}
	template <typename T = uintptr_t> T readInt64(uintptr_t dest) {
		return ((T (*)(TdrReadBuf*, uintptr_t))(Il2CppBase() + 0x444C59C))(this, dest);
	}
	template <typename T = uintptr_t> T readUInt64(uintptr_t dest) {
		return ((T (*)(TdrReadBuf*, uintptr_t))(Il2CppBase() + 0x444C788))(this, dest);
	}
	template <typename T = uintptr_t> T readFloat(uintptr_t dest) {
		return ((T (*)(TdrReadBuf*, uintptr_t))(Il2CppBase() + 0x444C860))(this, dest);
	}
	template <typename T = uintptr_t> T readDouble(uintptr_t dest) {
		return ((T (*)(TdrReadBuf*, uintptr_t))(Il2CppBase() + 0x444C994))(this, dest);
	}
	template <typename T = uintptr_t> T readVarUInt16(uintptr_t dest) {
		return ((T (*)(TdrReadBuf*, uintptr_t))(Il2CppBase() + 0x444CAC8))(this, dest);
	}
	template <typename T = uintptr_t> T readVarInt16(uintptr_t dest) {
		return ((T (*)(TdrReadBuf*, uintptr_t))(Il2CppBase() + 0x444CCB0))(this, dest);
	}
	template <typename T = uintptr_t> T readVarUInt32(uintptr_t dest) {
		return ((T (*)(TdrReadBuf*, uintptr_t))(Il2CppBase() + 0x444CECC))(this, dest);
	}
	template <typename T = uintptr_t> T readVarInt32(uintptr_t dest) {
		return ((T (*)(TdrReadBuf*, uintptr_t))(Il2CppBase() + 0x444D0B4))(this, dest);
	}
	template <typename T = uintptr_t> T readVarUInt64(uintptr_t dest) {
		return ((T (*)(TdrReadBuf*, uintptr_t))(Il2CppBase() + 0x444D2B0))(this, dest);
	}
	template <typename T = uintptr_t> T readVarInt64(uintptr_t dest) {
		return ((T (*)(TdrReadBuf*, uintptr_t))(Il2CppBase() + 0x444D4C0))(this, dest);
	}
	template <typename T = uintptr_t> T skipForward(int32_t step) {
		return ((T (*)(TdrReadBuf*, int32_t))(Il2CppBase() + 0x444D6F4))(this, step);
	}
	template <typename T = uintptr_t> T readCString(Il2CppArray<uintptr_t>* dest, int32_t count) {
		return ((T (*)(TdrReadBuf*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x444D7B8))(this, dest, count);
	}
	template <typename T = uintptr_t> T readWString(Il2CppArray<uintptr_t>* dest, int32_t count) {
		return ((T (*)(TdrReadBuf*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x444D968))(this, dest, count);
	}
	template <typename T = uintptr_t> T readInt8_1(uintptr_t dest, int32_t pos) {
		return ((T (*)(TdrReadBuf*, uintptr_t, int32_t))(Il2CppBase() + 0x444DB5C))(this, dest, pos);
	}
	template <typename T = uintptr_t> T readUInt8_1(uintptr_t dest, int32_t pos) {
		return ((T (*)(TdrReadBuf*, uintptr_t, int32_t))(Il2CppBase() + 0x444DC38))(this, dest, pos);
	}
	template <typename T = uintptr_t> T readInt16_1(uintptr_t dest, int32_t pos) {
		return ((T (*)(TdrReadBuf*, uintptr_t, int32_t))(Il2CppBase() + 0x444DD38))(this, dest, pos);
	}
	template <typename T = uintptr_t> T readUInt16_1(uintptr_t dest, int32_t pos) {
		return ((T (*)(TdrReadBuf*, uintptr_t, int32_t))(Il2CppBase() + 0x444DF20))(this, dest, pos);
	}
	template <typename T = uintptr_t> T readInt32_1(uintptr_t dest, int32_t pos) {
		return ((T (*)(TdrReadBuf*, uintptr_t, int32_t))(Il2CppBase() + 0x444DFFC))(this, dest, pos);
	}
	template <typename T = uintptr_t> T readUInt32_1(uintptr_t dest, int32_t pos) {
		return ((T (*)(TdrReadBuf*, uintptr_t, int32_t))(Il2CppBase() + 0x444E1E4))(this, dest, pos);
	}
	template <typename T = uintptr_t> T readInt64_1(uintptr_t dest, int32_t pos) {
		return ((T (*)(TdrReadBuf*, uintptr_t, int32_t))(Il2CppBase() + 0x444E2C0))(this, dest, pos);
	}
	template <typename T = uintptr_t> T readUInt64_1(uintptr_t dest, int32_t pos) {
		return ((T (*)(TdrReadBuf*, uintptr_t, int32_t))(Il2CppBase() + 0x444E4A8))(this, dest, pos);
	}
	template <typename T = uintptr_t> T readFloat_1(uintptr_t dest, int32_t pos) {
		return ((T (*)(TdrReadBuf*, uintptr_t, int32_t))(Il2CppBase() + 0x444E590))(this, dest, pos);
	}
	template <typename T = uintptr_t> T readDouble_1(uintptr_t dest, int32_t pos) {
		return ((T (*)(TdrReadBuf*, uintptr_t, int32_t))(Il2CppBase() + 0x444E6D0))(this, dest, pos);
	}
	template <typename T = uintptr_t> T readCString_1(Il2CppArray<uintptr_t>* dest, int32_t count, int32_t pos) {
		return ((T (*)(TdrReadBuf*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x444E810))(this, dest, count, pos);
	}
	template <typename T = uintptr_t> T readWString_1(Il2CppArray<uintptr_t>* dest, int32_t count, int32_t pos) {
		return ((T (*)(TdrReadBuf*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x444E9B8))(this, dest, count, pos);
	}
	template <typename T = uintptr_t> T toHexStr(Il2CppArray<uintptr_t>* buffer, uintptr_t* usedsize) {
		return ((T (*)(TdrReadBuf*, Il2CppArray<uintptr_t>*, uintptr_t*))(Il2CppBase() + 0x444EBA8))(this, buffer, usedsize);
	}
	template <typename T = uintptr_t> T toHexStr_1(uintptr_t buffer) {
		return ((T (*)(TdrReadBuf*, uintptr_t))(Il2CppBase() + 0x444EF58))(this, buffer);
	}

};

}
