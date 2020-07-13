#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ISocketEventProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ISocketEventProcessor"));
	}


	template <typename T = bool> T ProcessPacket(Il2CppArray<uintptr_t>* data, int32_t PackDataCount, int32_t Sequence) {
		return ((T (*)(ISocketEventProcessor*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, data, PackDataCount, Sequence);
	}
	template <typename T = void> T OnDisconnect(int32_t errorCode) {
		return ((T (*)(ISocketEventProcessor*, int32_t))(Il2CppBase() + 0x0))(this, errorCode);
	}

};

}
