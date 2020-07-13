#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class S2CRESLOGINSECONDARY
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "S2C_RES_LOGIN_SECONDARY"));
	}

	template <typename T = uint64_t> T& GamePlayerId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& DsPlayerId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& BaseUniqID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = unsigned char> T& SingleGamePropCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SingleGameProps() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& IndividuationItems() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& WinCircleIndividuationItemId() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& PicId() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& FrameId() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PicUrl() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& FlagId() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ModuleOpenFlag() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& AirPlatformPrefabId() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& AirPlatformRotY() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& AirPlatformPos() {
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
		return ((T (*)(S2CRESLOGINSECONDARY*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4E5B95C))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4E5BD90))(0, data, DataIndex);
	}
	template <typename T = void> T xLuaBaseProxy_Unserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1) {
		return ((T (*)(S2CRESLOGINSECONDARY*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4E5BEAC))(this, P0, P1);
	}

};

}
