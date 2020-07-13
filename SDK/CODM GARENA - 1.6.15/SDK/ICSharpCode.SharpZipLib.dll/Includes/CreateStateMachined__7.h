#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateStateMachined7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "", "<CreateStateMachine>d__7"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& 2__current() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& l__initialThreadId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& dataCodeCount5__1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& metaCodeTree5__2() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& index5__3() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& i5__4() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = unsigned char> T& codeLength5__5() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& symbol5__6() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& repeatCount5__7() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreateStateMachined7*))(Il2CppBase() + 0x4A785D4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreateStateMachined7*))(Il2CppBase() + 0x4A785D8))(this);
	}
	template <typename T = bool> T System_Collections_Generic_IEnumeratorSystem_Boolean_get_Current() {
		return ((T (*)(CreateStateMachined7*))(Il2CppBase() + 0x4A78FE8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreateStateMachined7*))(Il2CppBase() + 0x4A78FF0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreateStateMachined7*))(Il2CppBase() + 0x4A79084))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableSystem_Boolean_GetEnumerator() {
		return ((T (*)(CreateStateMachined7*))(Il2CppBase() + 0x4A79118))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(CreateStateMachined7*))(Il2CppBase() + 0x4A79240))(this);
	}

};

}
