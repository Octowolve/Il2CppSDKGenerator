#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ByteReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ByteReader"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& mBuffer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& mOffset() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> static T& mTemp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Open() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ReadLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_ReadLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadDictionary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadCSV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> static T Open(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x530F76C))(0, path);
	}
	template <typename T = bool> T get_canRead() {
		return ((T (*)(ByteReader*))(Il2CppBase() + 0x530F9C0))(this);
	}
	template <typename T = Il2CppString*> static T ReadLine(Il2CppArray<uintptr_t>* buffer, int32_t start, int32_t count) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x530F9EC))(0, buffer, start, count);
	}
	template <typename T = Il2CppString*> T ReadLine_1() {
		return ((T (*)(ByteReader*))(Il2CppBase() + 0x530FB50))(this);
	}
	template <typename T = Il2CppString*> T ReadLine_2(bool skipEmptyLines) {
		return ((T (*)(ByteReader*, bool))(Il2CppBase() + 0x530FC28))(this, skipEmptyLines);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T ReadDictionary() {
		return ((T (*)(ByteReader*))(Il2CppBase() + 0x530FE3C))(this);
	}
	template <typename T = void*> T ReadCSV() {
		return ((T (*)(ByteReader*))(Il2CppBase() + 0x5310110))(this);
	}

};

}
