#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomAskDownloadMapReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomAskDownloadMapReq"));
	}

	template <typename T = uint32_t> T& _mapid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T get_mapid() {
		return ((T (*)(CSGroupRoomAskDownloadMapReq*))(Il2CppBase() + 0x51DD85C))(this);
	}
	template <typename T = void> T set_mapid(uint32_t value) {
		return ((T (*)(CSGroupRoomAskDownloadMapReq*, uint32_t))(Il2CppBase() + 0x51DD864))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomAskDownloadMapReq*, bool))(Il2CppBase() + 0x51DD86C))(this, createIfMissing);
	}

};

}
