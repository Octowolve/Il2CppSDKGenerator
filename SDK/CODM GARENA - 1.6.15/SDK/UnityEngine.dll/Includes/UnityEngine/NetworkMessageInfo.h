#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class NetworkMessageInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "NetworkMessageInfo"));
	}

	template <typename T = double> T& m_TimeStamp() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& m_Sender() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_ViewID() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
