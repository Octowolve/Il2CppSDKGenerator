#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Resources {

class ResourceSet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Resources", "ResourceSet"));
	}

	template <typename T = uintptr_t> T& Reader() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Table() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& resources_read() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& disposed() {
		return *(T*)((uintptr_t)this + 0x11);
	}

	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(ResourceSet*))(Il2CppBase() + 0x4FDE354))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ResourceSet*))(Il2CppBase() + 0x4FDE364))(this);
	}
	template <typename T = void> T Dispose_1(bool disposing) {
		return ((T (*)(ResourceSet*, bool))(Il2CppBase() + 0x4FDE39C))(this, disposing);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(ResourceSet*))(Il2CppBase() + 0x4FDE4A4))(this);
	}
	template <typename T = uintptr_t> T GetObjectInternal(Il2CppString* name, bool ignoreCase) {
		return ((T (*)(ResourceSet*, Il2CppString*, bool))(Il2CppBase() + 0x4FDE59C))(this, name, ignoreCase);
	}
	template <typename T = uintptr_t> T GetObject(Il2CppString* name) {
		return ((T (*)(ResourceSet*, Il2CppString*))(Il2CppBase() + 0x4FDEB78))(this, name);
	}
	template <typename T = uintptr_t> T GetObject_1(Il2CppString* name, bool ignoreCase) {
		return ((T (*)(ResourceSet*, Il2CppString*, bool))(Il2CppBase() + 0x4FDEB80))(this, name, ignoreCase);
	}
	template <typename T = void> T ReadResources() {
		return ((T (*)(ResourceSet*))(Il2CppBase() + 0x4FDEB84))(this);
	}

};

}
