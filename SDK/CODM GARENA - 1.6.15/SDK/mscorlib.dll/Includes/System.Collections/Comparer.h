#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections {

class Comparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections", "Comparer"));
	}

	template <typename T = uintptr_t> static T& Default() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& DefaultInvariant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& m_compareInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = int32_t> T Compare(uintptr_t a, uintptr_t b) {
		return ((T (*)(Comparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x363678C))(this, a, b);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(Comparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x36386C0))(this, info, context);
	}

};

}
