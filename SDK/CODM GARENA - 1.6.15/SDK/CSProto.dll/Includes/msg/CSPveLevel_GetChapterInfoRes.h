#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPveLevelGetChapterInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPveLevel_GetChapterInfoRes"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _pve_chapter_list() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_pve_chapter_list() {
		return ((T (*)(CSPveLevelGetChapterInfoRes*))(Il2CppBase() + 0x51F1E88))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPveLevelGetChapterInfoRes*, bool))(Il2CppBase() + 0x51F1E90))(this, createIfMissing);
	}

};

}
