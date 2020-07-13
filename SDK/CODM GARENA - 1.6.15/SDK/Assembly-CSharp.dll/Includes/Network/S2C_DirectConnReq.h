#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class S2CDirectConnReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "S2C_DirectConnReq"));
	}

	template <typename T = uint32_t> T& msgic_code() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uint32_t> T& result_code() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uint32_t> T& map_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& room_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& player_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& ds_ip() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint16_t> T& ds_port() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& crypt_key() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Parse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uint32_t> T GetSize() {
		return ((T (*)(S2CDirectConnReq*))(Il2CppBase() + 0x4FA2E74))(this);
	}
	template <typename T = bool> T Parse(Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(S2CDirectConnReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4FA30E8))(this, buffer);
	}

};

}
