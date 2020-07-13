#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class CharacterModelConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "CharacterModelConfig"));
	}

	template <typename T = uint64_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Desc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Guarder1P() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Guarder3P() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& GuarderLobby() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& GuarderHeadModel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& GuarderBagModel() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& BRLobby() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Traitor1P() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Traitor3P() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& BRModel() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& BRHeadModel() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& BRBagModel() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& Female() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& DefaultModelID() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BagOffset() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uint64_t> T GetPrimaryKeyValue() {
		return ((T (*)(CharacterModelConfig*))(Il2CppBase() + 0x2D5CBFC))(this);
	}
	template <typename T = uint64_t> T get_ItemID() {
		return ((T (*)(CharacterModelConfig*))(Il2CppBase() + 0x2D5CC9C))(this);
	}
	template <typename T = void> T set_ItemID(uint64_t value) {
		return ((T (*)(CharacterModelConfig*, uint64_t))(Il2CppBase() + 0x2D5CCA4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(CharacterModelConfig*))(Il2CppBase() + 0x2D5CCB4))(this);
	}
	template <typename T = void> T set_Desc(Il2CppString* value) {
		return ((T (*)(CharacterModelConfig*, Il2CppString*))(Il2CppBase() + 0x2D5CCBC))(this, value);
	}
	template <typename T = int32_t> T get_Guarder1P() {
		return ((T (*)(CharacterModelConfig*))(Il2CppBase() + 0x2D5CCC4))(this);
	}
	template <typename T = void> T set_Guarder1P(int32_t value) {
		return ((T (*)(CharacterModelConfig*, int32_t))(Il2CppBase() + 0x2D5CCCC))(this, value);
	}
	template <typename T = int32_t> T get_Guarder3P() {
		return ((T (*)(CharacterModelConfig*))(Il2CppBase() + 0x2D5CCD4))(this);
	}
	template <typename T = void> T set_Guarder3P(int32_t value) {
		return ((T (*)(CharacterModelConfig*, int32_t))(Il2CppBase() + 0x2D5CCDC))(this, value);
	}
	template <typename T = int32_t> T get_GuarderLobby() {
		return ((T (*)(CharacterModelConfig*))(Il2CppBase() + 0x2D5CCE4))(this);
	}
	template <typename T = void> T set_GuarderLobby(int32_t value) {
		return ((T (*)(CharacterModelConfig*, int32_t))(Il2CppBase() + 0x2D5CCEC))(this, value);
	}
	template <typename T = int32_t> T get_GuarderHeadModel() {
		return ((T (*)(CharacterModelConfig*))(Il2CppBase() + 0x2D5CCF4))(this);
	}
	template <typename T = void> T set_GuarderHeadModel(int32_t value) {
		return ((T (*)(CharacterModelConfig*, int32_t))(Il2CppBase() + 0x2D5CCFC))(this, value);
	}
	template <typename T = int32_t> T get_GuarderBagModel() {
		return ((T (*)(CharacterModelConfig*))(Il2CppBase() + 0x2D5CD04))(this);
	}
	template <typename T = void> T set_GuarderBagModel(int32_t value) {
		return ((T (*)(CharacterModelConfig*, int32_t))(Il2CppBase() + 0x2D5CD0C))(this, value);
	}
	template <typename T = int32_t> T get_BRLobby() {
		return ((T (*)(CharacterModelConfig*))(Il2CppBase() + 0x2D5CD14))(this);
	}
	template <typename T = void> T set_BRLobby(int32_t value) {
		return ((T (*)(CharacterModelConfig*, int32_t))(Il2CppBase() + 0x2D5CD1C))(this, value);
	}
	template <typename T = int32_t> T get_Traitor1P() {
		return ((T (*)(CharacterModelConfig*))(Il2CppBase() + 0x2D5CD24))(this);
	}
	template <typename T = void> T set_Traitor1P(int32_t value) {
		return ((T (*)(CharacterModelConfig*, int32_t))(Il2CppBase() + 0x2D5CD2C))(this, value);
	}
	template <typename T = int32_t> T get_Traitor3P() {
		return ((T (*)(CharacterModelConfig*))(Il2CppBase() + 0x2D5CD34))(this);
	}
	template <typename T = void> T set_Traitor3P(int32_t value) {
		return ((T (*)(CharacterModelConfig*, int32_t))(Il2CppBase() + 0x2D5CD3C))(this, value);
	}
	template <typename T = int32_t> T get_BRModel() {
		return ((T (*)(CharacterModelConfig*))(Il2CppBase() + 0x2D5CD44))(this);
	}
	template <typename T = void> T set_BRModel(int32_t value) {
		return ((T (*)(CharacterModelConfig*, int32_t))(Il2CppBase() + 0x2D5CD4C))(this, value);
	}
	template <typename T = int32_t> T get_BRHeadModel() {
		return ((T (*)(CharacterModelConfig*))(Il2CppBase() + 0x2D5CD54))(this);
	}
	template <typename T = void> T set_BRHeadModel(int32_t value) {
		return ((T (*)(CharacterModelConfig*, int32_t))(Il2CppBase() + 0x2D5CD5C))(this, value);
	}
	template <typename T = int32_t> T get_BRBagModel() {
		return ((T (*)(CharacterModelConfig*))(Il2CppBase() + 0x2D5CD64))(this);
	}
	template <typename T = void> T set_BRBagModel(int32_t value) {
		return ((T (*)(CharacterModelConfig*, int32_t))(Il2CppBase() + 0x2D5CD6C))(this, value);
	}
	template <typename T = bool> T get_Female() {
		return ((T (*)(CharacterModelConfig*))(Il2CppBase() + 0x2D5CD74))(this);
	}
	template <typename T = void> T set_Female(bool value) {
		return ((T (*)(CharacterModelConfig*, bool))(Il2CppBase() + 0x2D5CD7C))(this, value);
	}
	template <typename T = int32_t> T get_DefaultModelID() {
		return ((T (*)(CharacterModelConfig*))(Il2CppBase() + 0x2D5CD84))(this);
	}
	template <typename T = void> T set_DefaultModelID(int32_t value) {
		return ((T (*)(CharacterModelConfig*, int32_t))(Il2CppBase() + 0x2D5CD8C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_BagOffset() {
		return ((T (*)(CharacterModelConfig*))(Il2CppBase() + 0x2D5CD94))(this);
	}
	template <typename T = void> T set_BagOffset(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CharacterModelConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D5CD9C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(CharacterModelConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D5CDA4))(this, bytes, position);
	}

};

}
