#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MouseDragOutsideRectcIterator1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "", "<MouseDragOutsideRect>c__Iterator1"));
	}

	template <typename T = uintptr_t> T& eventData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector2> T& localMousePos__1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppRect> T& rect__1() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& delay__1() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(MouseDragOutsideRectcIterator1*))(Il2CppBase() + 0x3D31894))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(MouseDragOutsideRectcIterator1*))(Il2CppBase() + 0x3D31BBC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(MouseDragOutsideRectcIterator1*))(Il2CppBase() + 0x3D31BC4))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(MouseDragOutsideRectcIterator1*))(Il2CppBase() + 0x3D31BCC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(MouseDragOutsideRectcIterator1*))(Il2CppBase() + 0x3D31BE0))(this);
	}

};

}
