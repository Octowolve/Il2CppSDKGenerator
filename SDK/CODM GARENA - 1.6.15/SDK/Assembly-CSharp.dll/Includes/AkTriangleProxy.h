#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkTriangleProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkTriangleProxy"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22AE7BC))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkTriangleProxy*, uintptr_t))(Il2CppBase() + 0x22AE850))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkTriangleProxy*))(Il2CppBase() + 0x22AE914))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkTriangleProxy*))(Il2CppBase() + 0x22AE974))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(AkTriangleProxy*))(Il2CppBase() + 0x22AEAFC))(this);
	}
	template <typename T = void> T DeleteName() {
		return ((T (*)(AkTriangleProxy*))(Il2CppBase() + 0x22AEBA0))(this);
	}
	template <typename T = int32_t> static T GetSizeOf() {
		return ((T (*)(void *))(Il2CppBase() + 0x22AEC44))(0);
	}

};

}
