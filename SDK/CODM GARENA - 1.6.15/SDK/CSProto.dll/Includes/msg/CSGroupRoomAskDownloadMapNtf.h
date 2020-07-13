#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomAskDownloadMapNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomAskDownloadMapNtf"));
	}

	template <typename T = uint32_t> T& _mapid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T get_mapid() {
		return ((T (*)(CSGroupRoomAskDownloadMapNtf*))(Il2CppBase() + 0x51DD830))(this);
	}
	template <typename T = void> T set_mapid(uint32_t value) {
		return ((T (*)(CSGroupRoomAskDownloadMapNtf*, uint32_t))(Il2CppBase() + 0x51DD838))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomAskDownloadMapNtf*, bool))(Il2CppBase() + 0x51DD840))(this, createIfMissing);
	}

};

}
