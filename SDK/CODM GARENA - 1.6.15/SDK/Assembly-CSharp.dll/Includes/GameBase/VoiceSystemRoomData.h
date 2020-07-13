#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class VoiceSystemRoomData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "VoiceSystemRoomData"));
	}

	template <typename T = Il2CppString*> T& RoomName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<uint64_t, int32_t>*> T& Player2MemberMap() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& Member2VoiceStatus() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsEnableSpeaker() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& IsEnableMicrophone() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayer2MemberMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMember2VoiceStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMemberVoiceState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T UpdatePlayer2MemberMap(uint64_t pId, int32_t mId) {
		return ((T (*)(VoiceSystemRoomData*, uint64_t, int32_t))(Il2CppBase() + 0x1BE6044))(this, pId, mId);
	}
	template <typename T = void> T UpdateMember2VoiceStatus(int32_t mId, int32_t status) {
		return ((T (*)(VoiceSystemRoomData*, int32_t, int32_t))(Il2CppBase() + 0x1BE61CC))(this, mId, status);
	}
	template <typename T = uintptr_t> T GetMemberVoiceState(int32_t mId) {
		return ((T (*)(VoiceSystemRoomData*, int32_t))(Il2CppBase() + 0x1BE6340))(this, mId);
	}

};

}
