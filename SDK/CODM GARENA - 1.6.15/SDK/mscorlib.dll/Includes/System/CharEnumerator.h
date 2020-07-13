#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class CharEnumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "CharEnumerator"));
	}

	template <typename T = Il2CppString*> T& str() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& length() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CharEnumerator*))(Il2CppBase() + 0x36305A4))(this);
	}
	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CharEnumerator*))(Il2CppBase() + 0x3630734))(this);
	}
	template <typename T = char> T get_Current() {
		return ((T (*)(CharEnumerator*))(Il2CppBase() + 0x363063C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(CharEnumerator*))(Il2CppBase() + 0x3630738))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CharEnumerator*))(Il2CppBase() + 0x36307E4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CharEnumerator*))(Il2CppBase() + 0x3630808))(this);
	}

};

}
