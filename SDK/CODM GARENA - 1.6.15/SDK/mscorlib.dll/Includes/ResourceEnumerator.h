#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ResourceEnumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "ResourceEnumerator"));
	}

	template <typename T = uintptr_t> T& reader() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& finished() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_Entry() {
		return ((T (*)(ResourceEnumerator*))(Il2CppBase() + 0x4FDD99C))(this);
	}
	template <typename T = uintptr_t> T get_Key() {
		return ((T (*)(ResourceEnumerator*))(Il2CppBase() + 0x4FDDAE0))(this);
	}
	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(ResourceEnumerator*))(Il2CppBase() + 0x4FDDC14))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(ResourceEnumerator*))(Il2CppBase() + 0x4FDDD48))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ResourceEnumerator*))(Il2CppBase() + 0x4FDDDE4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ResourceEnumerator*))(Il2CppBase() + 0x4FDDEEC))(this);
	}
	template <typename T = void> T FillCache() {
		return ((T (*)(ResourceEnumerator*))(Il2CppBase() + 0x4FDD818))(this);
	}

};

}
