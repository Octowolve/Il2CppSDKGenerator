#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBFireArmModeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBFireArmModeData"));
	}

	template <typename T = uintptr_t> T& _CommonData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _KilledNum() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _Level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _Exp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _AttachmentData() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _RankID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _ConciseResult() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _Skills() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _CamoID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _EffectID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _BuffID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _AttrId() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& _IsLevelup() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _StrengthenLevel() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _PVEAttachmentData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _PVESkills() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& _NoIneritCurLevel() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = uintptr_t> T get_CommonData() {
		return ((T (*)(DBFireArmModeData*))(Il2CppBase() + 0x51B7E60))(this);
	}
	template <typename T = void> T set_CommonData(uintptr_t value) {
		return ((T (*)(DBFireArmModeData*, uintptr_t))(Il2CppBase() + 0x51B7E68))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_KilledNum() {
		return ((T (*)(DBFireArmModeData*))(Il2CppBase() + 0x51B7E70))(this);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(DBFireArmModeData*))(Il2CppBase() + 0x51B7E78))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(DBFireArmModeData*, int32_t))(Il2CppBase() + 0x51B7E80))(this, value);
	}
	template <typename T = int32_t> T get_Exp() {
		return ((T (*)(DBFireArmModeData*))(Il2CppBase() + 0x51B7E88))(this);
	}
	template <typename T = void> T set_Exp(int32_t value) {
		return ((T (*)(DBFireArmModeData*, int32_t))(Il2CppBase() + 0x51B7E90))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_AttachmentData() {
		return ((T (*)(DBFireArmModeData*))(Il2CppBase() + 0x51B7E98))(this);
	}
	template <typename T = uint32_t> T get_RankID() {
		return ((T (*)(DBFireArmModeData*))(Il2CppBase() + 0x51B7EA0))(this);
	}
	template <typename T = void> T set_RankID(uint32_t value) {
		return ((T (*)(DBFireArmModeData*, uint32_t))(Il2CppBase() + 0x51B7EA8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ConciseResult() {
		return ((T (*)(DBFireArmModeData*))(Il2CppBase() + 0x51B7EB0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_Skills() {
		return ((T (*)(DBFireArmModeData*))(Il2CppBase() + 0x51B7EB8))(this);
	}
	template <typename T = uint32_t> T get_CamoID() {
		return ((T (*)(DBFireArmModeData*))(Il2CppBase() + 0x51B7EC0))(this);
	}
	template <typename T = void> T set_CamoID(uint32_t value) {
		return ((T (*)(DBFireArmModeData*, uint32_t))(Il2CppBase() + 0x51B7EC8))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_EffectID() {
		return ((T (*)(DBFireArmModeData*))(Il2CppBase() + 0x51B7ED0))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_BuffID() {
		return ((T (*)(DBFireArmModeData*))(Il2CppBase() + 0x51B7ED8))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_AttrId() {
		return ((T (*)(DBFireArmModeData*))(Il2CppBase() + 0x51B7EE0))(this);
	}
	template <typename T = int32_t> T get_IsLevelup() {
		return ((T (*)(DBFireArmModeData*))(Il2CppBase() + 0x51B7EE8))(this);
	}
	template <typename T = void> T set_IsLevelup(int32_t value) {
		return ((T (*)(DBFireArmModeData*, int32_t))(Il2CppBase() + 0x51B7EF0))(this, value);
	}
	template <typename T = int32_t> T get_StrengthenLevel() {
		return ((T (*)(DBFireArmModeData*))(Il2CppBase() + 0x51B7EF8))(this);
	}
	template <typename T = void> T set_StrengthenLevel(int32_t value) {
		return ((T (*)(DBFireArmModeData*, int32_t))(Il2CppBase() + 0x51B7F00))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_PVEAttachmentData() {
		return ((T (*)(DBFireArmModeData*))(Il2CppBase() + 0x51B7F08))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_PVESkills() {
		return ((T (*)(DBFireArmModeData*))(Il2CppBase() + 0x51B7F10))(this);
	}
	template <typename T = bool> T get_NoIneritCurLevel() {
		return ((T (*)(DBFireArmModeData*))(Il2CppBase() + 0x51B7F18))(this);
	}
	template <typename T = void> T set_NoIneritCurLevel(bool value) {
		return ((T (*)(DBFireArmModeData*, bool))(Il2CppBase() + 0x51B7F20))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBFireArmModeData*, bool))(Il2CppBase() + 0x51B7F28))(this, createIfMissing);
	}

};

}
