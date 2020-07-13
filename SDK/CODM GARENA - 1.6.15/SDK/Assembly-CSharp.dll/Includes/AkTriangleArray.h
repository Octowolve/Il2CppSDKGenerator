#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkTriangleArray
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkTriangleArray"));
	}

	template <typename T = int32_t> T& SIZE_OF_AKTRIANGLE() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_Buffer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_Count() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Dispose() {
		return ((T (*)(AkTriangleArray*))(Il2CppBase() + 0x22ABA04))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkTriangleArray*))(Il2CppBase() + 0x22AE5D4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AkTriangleArray*))(Il2CppBase() + 0x22AE638))(this);
	}
	template <typename T = uintptr_t> T GetTriangle(int32_t index) {
		return ((T (*)(AkTriangleArray*, int32_t))(Il2CppBase() + 0x22AA64C))(this, index);
	}
	template <typename T = uintptr_t> T GetBuffer() {
		return ((T (*)(AkTriangleArray*))(Il2CppBase() + 0x2276FAC))(this);
	}
	template <typename T = int32_t> T Count() {
		return ((T (*)(AkTriangleArray*))(Il2CppBase() + 0x22AE644))(this);
	}
	template <typename T = uintptr_t> T GetObjectPtr(int32_t index) {
		return ((T (*)(AkTriangleArray*, int32_t))(Il2CppBase() + 0x22AE588))(this, index);
	}

};

}
