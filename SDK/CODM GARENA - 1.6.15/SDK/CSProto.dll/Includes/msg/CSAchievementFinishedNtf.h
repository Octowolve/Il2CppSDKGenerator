#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAchievementFinishedNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAchievementFinishedNtf"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _ach() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_ach() {
		return ((T (*)(CSAchievementFinishedNtf*))(Il2CppBase() + 0x5170A30))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAchievementFinishedNtf*, bool))(Il2CppBase() + 0x5170A38))(this, createIfMissing);
	}

};

}
