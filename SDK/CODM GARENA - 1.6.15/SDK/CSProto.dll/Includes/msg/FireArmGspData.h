#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class FireArmGspData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "FireArmGspData"));
	}

	template <typename T = uintptr_t> T& _OwnFireArmData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _ReticleData() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _CamoData() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T get_OwnFireArmData() {
		return ((T (*)(FireArmGspData*))(Il2CppBase() + 0x522740C))(this);
	}
	template <typename T = void> T set_OwnFireArmData(uintptr_t value) {
		return ((T (*)(FireArmGspData*, uintptr_t))(Il2CppBase() + 0x5227414))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ReticleData() {
		return ((T (*)(FireArmGspData*))(Il2CppBase() + 0x522741C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_CamoData() {
		return ((T (*)(FireArmGspData*))(Il2CppBase() + 0x5227424))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(FireArmGspData*, bool))(Il2CppBase() + 0x522742C))(this, createIfMissing);
	}

};

}
