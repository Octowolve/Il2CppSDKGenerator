#pragma once
#include <Il2Cpp/Il2Cpp.h>

class resourcesloadasyncandcallcIterator11
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<__resources_load_async_and_call>c__Iterator1`1"));
	}

	template <typename T = Il2CppString*> T& path() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& req__0() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& asset__0() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(resourcesloadasyncandcallcIterator11*))(Il2CppBase() + 0x48D69D0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(resourcesloadasyncandcallcIterator11*))(Il2CppBase() + 0x48D6AD0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(resourcesloadasyncandcallcIterator11*))(Il2CppBase() + 0x48D6AD8))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(resourcesloadasyncandcallcIterator11*))(Il2CppBase() + 0x48D6AE0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(resourcesloadasyncandcallcIterator11*))(Il2CppBase() + 0x48D6AF4))(this);
	}

};

}
