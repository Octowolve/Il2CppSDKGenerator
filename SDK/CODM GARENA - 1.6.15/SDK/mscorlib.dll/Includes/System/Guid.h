#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Guid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Guid"));
	}

	template <typename T = int32_t> T& _a() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int16_t> T& _b() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int16_t> T& _c() {
		return *(T*)((uintptr_t)this + 0x6);
	}
	template <typename T = unsigned char> T& _d() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = unsigned char> T& _e() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = unsigned char> T& _f() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = unsigned char> T& _g() {
		return *(T*)((uintptr_t)this + 0xB);
	}
	template <typename T = unsigned char> T& _h() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = unsigned char> T& _i() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = unsigned char> T& _j() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = unsigned char> T& _k() {
		return *(T*)((uintptr_t)this + 0xF);
	}
	template <typename T = uintptr_t> static T& Empty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _rngAccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _rng() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& _fastRng() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> static T CheckNull(uintptr_t o) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FDE574))(0, o);
	}
	template <typename T = void> static T CheckLength(Il2CppArray<uintptr_t>* o, int32_t l) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3FDEB94))(0, o, l);
	}
	template <typename T = void> static T CheckArray(Il2CppArray<uintptr_t>* o, int32_t l) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3FDE38C))(0, o, l);
	}
	template <typename T = int32_t> static T Compare(int32_t x, int32_t y) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x3FDECEC))(0, x, y);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t value) {
		return ((T (*)(Guid*, uintptr_t))(Il2CppBase() + 0x3FDF164))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t o) {
		return ((T (*)(Guid*, uintptr_t))(Il2CppBase() + 0x3FDF238))(this, o);
	}
	template <typename T = int32_t> T CompareTo_1(uintptr_t value) {
		return ((T (*)(Guid*, uintptr_t))(Il2CppBase() + 0x3FDF240))(this, value);
	}
	template <typename T = bool> T Equals_1(uintptr_t g) {
		return ((T (*)(Guid*, uintptr_t))(Il2CppBase() + 0x3FDF294))(this, g);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Guid*))(Il2CppBase() + 0x3FDF324))(this);
	}
	template <typename T = char> static T ToHex(int32_t b) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3FDF32C))(0, b);
	}
	template <typename T = uintptr_t> static T NewGuid() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FDF344))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FastNewGuidArray() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FDF5EC))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ToByteArray() {
		return ((T (*)(Guid*))(Il2CppBase() + 0x3FDFC7C))(this);
	}
	template <typename T = void> static T AppendInt(uintptr_t builder, int32_t value) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x3FDFC84))(0, builder, value);
	}
	template <typename T = void> static T AppendShort(uintptr_t builder, int16_t value) {
		return ((T (*)(void *, uintptr_t, int16_t))(Il2CppBase() + 0x3FDFE50))(0, builder, value);
	}
	template <typename T = void> static T AppendByte(uintptr_t builder, unsigned char value) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x3FDFF90))(0, builder, value);
	}
	template <typename T = Il2CppString*> T BaseToString(bool h, bool p, bool b) {
		return ((T (*)(Guid*, bool, bool, bool))(Il2CppBase() + 0x3FE03D4))(this, h, p, b);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Guid*))(Il2CppBase() + 0x3FE0414))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(Il2CppString* format) {
		return ((T (*)(Guid*, Il2CppString*))(Il2CppBase() + 0x3FE0788))(this, format);
	}
	template <typename T = Il2CppString*> T ToString_2(Il2CppString* format, uintptr_t provider) {
		return ((T (*)(Guid*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3FE0794))(this, format, provider);
	}
	template <typename T = bool> static T op_Equality(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FE079C))(0, a, b);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FE07F8))(0, a, b);
	}

};

}
