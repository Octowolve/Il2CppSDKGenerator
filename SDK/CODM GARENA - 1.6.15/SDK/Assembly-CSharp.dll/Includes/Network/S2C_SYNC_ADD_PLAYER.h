#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class S2CSYNCADDPLAYER
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "S2C_SYNC_ADD_PLAYER"));
	}

	template <typename T = uint32_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = unsigned char> T& Camp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& NickName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = unsigned char> T& Msg() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& ClientUID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& PicId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& FrameId() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PicUrl() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = unsigned char> T& IsOberverFriend() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& LadderScore() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint64_t> T& RoleId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& ActorId() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& LadderLevel() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& OwnerPlayerId() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& FlagId() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Unserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Unserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(S2CSYNCADDPLAYER*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4E63204))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4E6347C))(0, data, DataIndex);
	}
	template <typename T = void> T xLuaBaseProxy_Unserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1) {
		return ((T (*)(S2CSYNCADDPLAYER*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4E6352C))(this, P0, P1);
	}

};

}
