#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class DirectConnectDSHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "DirectConnectDSHelper"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DirectConnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> static T DirectConnect(uint32_t roomID, Il2CppString* ip, uint16_t port, int32_t mapID, uint64_t playerID, Il2CppString* encryptKey, uint32_t groupRoomId, uint32_t groupRoomBusId) {
		return ((T (*)(void *, uint32_t, Il2CppString*, uint16_t, int32_t, uint64_t, Il2CppString*, uint32_t, uint32_t))(Il2CppBase() + 0x41BD718))(0, roomID, ip, port, mapID, playerID, encryptKey, groupRoomId, groupRoomBusId);
	}

};

}
