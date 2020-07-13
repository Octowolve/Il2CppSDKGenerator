#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkSoundPathInfoArray
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkSoundPathInfoArray"));
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
		return ((T (*)(AkSoundPathInfoArray*))(Il2CppBase() + 0x22A5808))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkSoundPathInfoArray*))(Il2CppBase() + 0x22A5918))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AkSoundPathInfoArray*))(Il2CppBase() + 0x22A597C))(this);
	}
	template <typename T = uintptr_t> T GetSoundPathInfo(int32_t index) {
		return ((T (*)(AkSoundPathInfoArray*, int32_t))(Il2CppBase() + 0x22A5988))(this, index);
	}
	template <typename T = uintptr_t> T GetBuffer() {
		return ((T (*)(AkSoundPathInfoArray*))(Il2CppBase() + 0x227B8E8))(this);
	}
	template <typename T = int32_t> T Count() {
		return ((T (*)(AkSoundPathInfoArray*))(Il2CppBase() + 0x22A5B7C))(this);
	}
	template <typename T = uintptr_t> T GetObjectPtr(int32_t index) {
		return ((T (*)(AkSoundPathInfoArray*, int32_t))(Il2CppBase() + 0x22A5A6C))(this, index);
	}

};

}
