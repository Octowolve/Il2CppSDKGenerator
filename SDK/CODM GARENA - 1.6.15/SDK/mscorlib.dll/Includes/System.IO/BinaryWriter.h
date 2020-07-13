#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class BinaryWriter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "BinaryWriter"));
	}

	template <typename T = uintptr_t> static T& Null() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& OutStream() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_encoding() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buffer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& disposed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& stringBuffer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& maxCharsPerRound() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(BinaryWriter*))(Il2CppBase() + 0x3FEB10C))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(BinaryWriter*))(Il2CppBase() + 0x3FEB120))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(BinaryWriter*, bool))(Il2CppBase() + 0x3FEB134))(this, disposing);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(BinaryWriter*))(Il2CppBase() + 0x3FEB17C))(this);
	}
	template <typename T = int64_t> T Seek(int32_t offset, uintptr_t origin) {
		return ((T (*)(BinaryWriter*, int32_t, uintptr_t))(Il2CppBase() + 0x3FEB1B0))(this, offset, origin);
	}
	template <typename T = void> T Write(bool value) {
		return ((T (*)(BinaryWriter*, bool))(Il2CppBase() + 0x3FEB1F8))(this, value);
	}
	template <typename T = void> T Write_1(unsigned char value) {
		return ((T (*)(BinaryWriter*, unsigned char))(Il2CppBase() + 0x3FEB32C))(this, value);
	}
	template <typename T = void> T Write_2(Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(BinaryWriter*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FEB428))(this, buffer);
	}
	template <typename T = void> T Write_3(Il2CppArray<uintptr_t>* buffer, int32_t index, int32_t count) {
		return ((T (*)(BinaryWriter*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3FEB584))(this, buffer, index, count);
	}
	template <typename T = void> T Write_4(char ch) {
		return ((T (*)(BinaryWriter*, char))(Il2CppBase() + 0x3FEB6E8))(this, ch);
	}
	template <typename T = void> T Write_5(Il2CppArray<uintptr_t>* chars) {
		return ((T (*)(BinaryWriter*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FEB87C))(this, chars);
	}
	template <typename T = void> T Write_6(uintptr_t value) {
		return ((T (*)(BinaryWriter*, uintptr_t))(Il2CppBase() + 0x3FEBA08))(this, value);
	}
	template <typename T = void> T Write_7(double value) {
		return ((T (*)(BinaryWriter*, double))(Il2CppBase() + 0x3FEBD04))(this, value);
	}
	template <typename T = void> T Write_8(int16_t value) {
		return ((T (*)(BinaryWriter*, int16_t))(Il2CppBase() + 0x3FEBE34))(this, value);
	}
	template <typename T = void> T Write_9(int32_t value) {
		return ((T (*)(BinaryWriter*, int32_t))(Il2CppBase() + 0x3FEBF94))(this, value);
	}
	template <typename T = void> T Write_10(int64_t value) {
		return ((T (*)(BinaryWriter*, int64_t))(Il2CppBase() + 0x3FEC140))(this, value);
	}
	template <typename T = void> T Write_11(signed char value) {
		return ((T (*)(BinaryWriter*, signed char))(Il2CppBase() + 0x3FEC2AC))(this, value);
	}
	template <typename T = void> T Write_12(float value) {
		return ((T (*)(BinaryWriter*, float))(Il2CppBase() + 0x3FEC3E0))(this, value);
	}
	template <typename T = void> T Write_13(Il2CppString* value) {
		return ((T (*)(BinaryWriter*, Il2CppString*))(Il2CppBase() + 0x3FEC504))(this, value);
	}
	template <typename T = void> T Write_14(uint16_t value) {
		return ((T (*)(BinaryWriter*, uint16_t))(Il2CppBase() + 0x3FEC7A4))(this, value);
	}
	template <typename T = void> T Write_15(uint32_t value) {
		return ((T (*)(BinaryWriter*, uint32_t))(Il2CppBase() + 0x3FEC900))(this, value);
	}
	template <typename T = void> T Write_16(uint64_t value) {
		return ((T (*)(BinaryWriter*, uint64_t))(Il2CppBase() + 0x3FECAAC))(this, value);
	}
	template <typename T = void> T Write7BitEncodedInt(int32_t value) {
		return ((T (*)(BinaryWriter*, int32_t))(Il2CppBase() + 0x3FEC758))(this, value);
	}

};

}
