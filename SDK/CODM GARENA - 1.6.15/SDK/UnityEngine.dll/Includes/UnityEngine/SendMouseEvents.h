#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class SendMouseEvents
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "SendMouseEvents"));
	}

	template <typename T = bool> static T& s_MouseUsed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& m_LastHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& m_MouseDownHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& m_CurrentHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& m_Cameras() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> static T SetMouseMoved() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E7E630))(0);
	}
	template <typename T = void> static T DoSendMouseEvents(int32_t skipRTCameras) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4E7E6E4))(0, skipRTCameras);
	}
	template <typename T = void> static T SendEvents(int32_t i, uintptr_t hit) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x4E7F64C))(0, i, hit);
	}

};

}
