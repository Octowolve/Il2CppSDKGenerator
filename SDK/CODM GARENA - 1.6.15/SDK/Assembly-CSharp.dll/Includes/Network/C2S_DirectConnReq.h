#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class C2SDirectConnReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "C2S_DirectConnReq"));
	}

	template <typename T = uint32_t> T& msgic_code() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uint32_t> T& map_id() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uint32_t> T& room_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& player_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& aiserver_ip() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint16_t> T& aiserver_port() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& extend() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExtendLen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uint32_t> T GetSize() {
		return ((T (*)(C2SDirectConnReq*))(Il2CppBase() + 0x50393A0))(this);
	}
	template <typename T = uint16_t> T GetExtendLen() {
		return ((T (*)(C2SDirectConnReq*))(Il2CppBase() + 0x50393A8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Serialize() {
		return ((T (*)(C2SDirectConnReq*))(Il2CppBase() + 0x5039678))(this);
	}

};

}
