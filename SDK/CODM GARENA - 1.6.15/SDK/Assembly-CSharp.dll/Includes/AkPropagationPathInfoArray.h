#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkPropagationPathInfoArray
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkPropagationPathInfoArray"));
	}

	template <typename T = int32_t> T& SIZE_OF_STRUCTURE() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_Buffer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_Count() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Dispose() {
		return ((T (*)(AkPropagationPathInfoArray*))(Il2CppBase() + 0x491AD08))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkPropagationPathInfoArray*))(Il2CppBase() + 0x491AE18))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AkPropagationPathInfoArray*))(Il2CppBase() + 0x491AE7C))(this);
	}
	template <typename T = uintptr_t> T GetPropagationPathInfo(int32_t index) {
		return ((T (*)(AkPropagationPathInfoArray*, int32_t))(Il2CppBase() + 0x491AE88))(this, index);
	}
	template <typename T = uintptr_t> T GetBuffer() {
		return ((T (*)(AkPropagationPathInfoArray*))(Il2CppBase() + 0x491B084))(this);
	}
	template <typename T = int32_t> T Count() {
		return ((T (*)(AkPropagationPathInfoArray*))(Il2CppBase() + 0x491B08C))(this);
	}
	template <typename T = uintptr_t> T GetObjectPtr(int32_t index) {
		return ((T (*)(AkPropagationPathInfoArray*, int32_t))(Il2CppBase() + 0x491AF6C))(this, index);
	}

};

}
