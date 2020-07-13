#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloudTdr {

class TdrWriteBuf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloudTdr", "TdrWriteBuf"));
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
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getUsedSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getTotalSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getLeftSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getBeginPtr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_reserve() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_writeInt8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_writeUInt8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_writeUInt16() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_writeInt16() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_writeUInt32() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_writeInt32() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_writeUInt64() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_writeInt64() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_writeFloat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_writeDouble() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_writeVarUInt16() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_writeVarInt16() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_writeVarUInt32() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_writeVarInt32() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_writeVarUInt64() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_writeVarInt64() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_writeCString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_writeWString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_writeInt8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_writeUInt8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_writeUInt16() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_writeInt16() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_writeUInt32() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_writeInt32() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_writeUInt64() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_writeInt64() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_writeFloat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_writeDouble() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_writeCString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_writeWString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}

	template <typename T = void> T _set(Il2CppArray<uintptr_t>* ptr, int32_t len) {
		return ((T (*)(TdrWriteBuf*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x445059C))(this, ptr, len);
	}
	template <typename T = void> T _reset() {
		return ((T (*)(TdrWriteBuf*))(Il2CppBase() + 0x445075C))(this);
	}
	template <typename T = void> T reset() {
		return ((T (*)(TdrWriteBuf*))(Il2CppBase() + 0x4450808))(this);
	}
	template <typename T = void> T set(Il2CppArray<uintptr_t>* ptr, int32_t len) {
		return ((T (*)(TdrWriteBuf*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x44508AC))(this, ptr, len);
	}
	template <typename T = int32_t> T getUsedSize() {
		return ((T (*)(TdrWriteBuf*))(Il2CppBase() + 0x444B8E8))(this);
	}
	template <typename T = int32_t> T getTotalSize() {
		return ((T (*)(TdrWriteBuf*))(Il2CppBase() + 0x4450978))(this);
	}
	template <typename T = int32_t> T getLeftSize() {
		return ((T (*)(TdrWriteBuf*))(Il2CppBase() + 0x4450A18))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T getBeginPtr() {
		return ((T (*)(TdrWriteBuf*))(Il2CppBase() + 0x444B848))(this);
	}
	template <typename T = uintptr_t> T reserve(int32_t gap) {
		return ((T (*)(TdrWriteBuf*, int32_t))(Il2CppBase() + 0x4450AC0))(this, gap);
	}
	template <typename T = uintptr_t> T writeInt8(signed char src) {
		return ((T (*)(TdrWriteBuf*, signed char))(Il2CppBase() + 0x4450B8C))(this, src);
	}
	template <typename T = uintptr_t> T writeUInt8(unsigned char src) {
		return ((T (*)(TdrWriteBuf*, unsigned char))(Il2CppBase() + 0x4450C3C))(this, src);
	}
	template <typename T = uintptr_t> T writeUInt16(uint16_t src) {
		return ((T (*)(TdrWriteBuf*, uint16_t))(Il2CppBase() + 0x4450D30))(this, src);
	}
	template <typename T = uintptr_t> T writeInt16(int16_t src) {
		return ((T (*)(TdrWriteBuf*, int16_t))(Il2CppBase() + 0x4450DE0))(this, src);
	}
	template <typename T = uintptr_t> T writeUInt32(uint32_t src) {
		return ((T (*)(TdrWriteBuf*, uint32_t))(Il2CppBase() + 0x4451038))(this, src);
	}
	template <typename T = uintptr_t> T writeInt32(int32_t src) {
		return ((T (*)(TdrWriteBuf*, int32_t))(Il2CppBase() + 0x44510E8))(this, src);
	}
	template <typename T = uintptr_t> T writeUInt64(uint64_t src) {
		return ((T (*)(TdrWriteBuf*, uint64_t))(Il2CppBase() + 0x4451340))(this, src);
	}
	template <typename T = uintptr_t> T writeInt64(int64_t src) {
		return ((T (*)(TdrWriteBuf*, int64_t))(Il2CppBase() + 0x445140C))(this, src);
	}
	template <typename T = uintptr_t> T writeFloat(float src) {
		return ((T (*)(TdrWriteBuf*, float))(Il2CppBase() + 0x4451680))(this, src);
	}
	template <typename T = uintptr_t> T writeDouble(double src) {
		return ((T (*)(TdrWriteBuf*, double))(Il2CppBase() + 0x445178C))(this, src);
	}
	template <typename T = uintptr_t> T writeVarUInt16(uint16_t src) {
		return ((T (*)(TdrWriteBuf*, uint16_t))(Il2CppBase() + 0x44518A8))(this, src);
	}
	template <typename T = uintptr_t> T writeVarInt16(int16_t src) {
		return ((T (*)(TdrWriteBuf*, int16_t))(Il2CppBase() + 0x4451AF8))(this, src);
	}
	template <typename T = uintptr_t> T writeVarUInt32(uint32_t src) {
		return ((T (*)(TdrWriteBuf*, uint32_t))(Il2CppBase() + 0x4451D50))(this, src);
	}
	template <typename T = uintptr_t> T writeVarInt32(int32_t src) {
		return ((T (*)(TdrWriteBuf*, int32_t))(Il2CppBase() + 0x4451F94))(this, src);
	}
	template <typename T = uintptr_t> T writeVarUInt64(uint64_t src) {
		return ((T (*)(TdrWriteBuf*, uint64_t))(Il2CppBase() + 0x44521E0))(this, src);
	}
	template <typename T = uintptr_t> T writeVarInt64(int64_t src) {
		return ((T (*)(TdrWriteBuf*, int64_t))(Il2CppBase() + 0x4452448))(this, src);
	}
	template <typename T = uintptr_t> T writeCString(Il2CppArray<uintptr_t>* src, int32_t count) {
		return ((T (*)(TdrWriteBuf*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x44526C0))(this, src, count);
	}
	template <typename T = uintptr_t> T writeWString(Il2CppArray<uintptr_t>* src, int32_t count) {
		return ((T (*)(TdrWriteBuf*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x445282C))(this, src, count);
	}
	template <typename T = uintptr_t> T writeInt8_1(signed char src, int32_t pos) {
		return ((T (*)(TdrWriteBuf*, signed char, int32_t))(Il2CppBase() + 0x4452A50))(this, src, pos);
	}
	template <typename T = uintptr_t> T writeUInt8_1(unsigned char src, int32_t pos) {
		return ((T (*)(TdrWriteBuf*, unsigned char, int32_t))(Il2CppBase() + 0x4452B1C))(this, src, pos);
	}
	template <typename T = uintptr_t> T writeUInt16_1(uint16_t src, int32_t pos) {
		return ((T (*)(TdrWriteBuf*, uint16_t, int32_t))(Il2CppBase() + 0x4452C18))(this, src, pos);
	}
	template <typename T = uintptr_t> T writeInt16_1(int16_t src, int32_t pos) {
		return ((T (*)(TdrWriteBuf*, int16_t, int32_t))(Il2CppBase() + 0x4452CE4))(this, src, pos);
	}
	template <typename T = uintptr_t> T writeUInt32_1(uint32_t src, int32_t pos) {
		return ((T (*)(TdrWriteBuf*, uint32_t, int32_t))(Il2CppBase() + 0x4452F40))(this, src, pos);
	}
	template <typename T = uintptr_t> T writeInt32_1(int32_t src, int32_t pos) {
		return ((T (*)(TdrWriteBuf*, int32_t, int32_t))(Il2CppBase() + 0x445300C))(this, src, pos);
	}
	template <typename T = uintptr_t> T writeUInt64_1(uint64_t src, int32_t pos) {
		return ((T (*)(TdrWriteBuf*, uint64_t, int32_t))(Il2CppBase() + 0x4453268))(this, src, pos);
	}
	template <typename T = uintptr_t> T writeInt64_1(int64_t src, int32_t pos) {
		return ((T (*)(TdrWriteBuf*, int64_t, int32_t))(Il2CppBase() + 0x445333C))(this, src, pos);
	}
	template <typename T = uintptr_t> T writeFloat_1(float src, int32_t pos) {
		return ((T (*)(TdrWriteBuf*, float, int32_t))(Il2CppBase() + 0x44535B0))(this, src, pos);
	}
	template <typename T = uintptr_t> T writeDouble_1(double src, int32_t pos) {
		return ((T (*)(TdrWriteBuf*, double, int32_t))(Il2CppBase() + 0x44536D8))(this, src, pos);
	}
	template <typename T = uintptr_t> T writeCString_1(Il2CppArray<uintptr_t>* src, int32_t count, int32_t pos) {
		return ((T (*)(TdrWriteBuf*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4453800))(this, src, count, pos);
	}
	template <typename T = uintptr_t> T writeWString_1(Il2CppArray<uintptr_t>* src, int32_t count, int32_t pos) {
		return ((T (*)(TdrWriteBuf*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4453988))(this, src, count, pos);
	}

};

}
