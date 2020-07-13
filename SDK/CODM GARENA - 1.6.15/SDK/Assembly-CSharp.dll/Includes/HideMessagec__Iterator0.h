#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HideMessagecIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<HideMessage>c__Iterator0"));
	}

	template <typename T = Il2CppVector3> T& topFrameLocalPosition__1() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& hideSpeed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& bottomFrameLocalPosition__1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(HideMessagecIterator0*))(Il2CppBase() + 0x260D1CC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(HideMessagecIterator0*))(Il2CppBase() + 0x260D5AC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(HideMessagecIterator0*))(Il2CppBase() + 0x260D5B4))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(HideMessagecIterator0*))(Il2CppBase() + 0x260D5BC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(HideMessagecIterator0*))(Il2CppBase() + 0x260D5D0))(this);
	}

};

}
