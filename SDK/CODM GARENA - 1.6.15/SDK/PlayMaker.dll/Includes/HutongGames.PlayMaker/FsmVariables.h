#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmVariables
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmVariables"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& floatVariables() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& intVariables() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& boolVariables() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& stringVariables() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& vector2Variables() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& vector3Variables() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& colorVariables() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& rectVariables() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& quaternionVariables() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& gameObjectVariables() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& objectVariables() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& materialVariables() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& textureVariables() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& arrayVariables() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& enumVariables() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& categories() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& variableCategoryIDs() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> static T& GlobalVariablesSynced() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_GlobalsComponent() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F1CACC))(0);
	}
	template <typename T = uintptr_t> static T get_GlobalVariables() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F0EE94))(0);
	}
	template <typename T = bool> static T get_GlobalVariablesSynced() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F1CAD8))(0);
	}
	template <typename T = void> static T set_GlobalVariablesSynced(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2F1CB58))(0, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Categories() {
		return ((T (*)(FsmVariables*))(Il2CppBase() + 0x2F1CBDC))(this);
	}
	template <typename T = void> T set_Categories(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(FsmVariables*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2F1CBE4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_CategoryIDs() {
		return ((T (*)(FsmVariables*))(Il2CppBase() + 0x2F1CBEC))(this);
	}
	template <typename T = void> T set_CategoryIDs(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(FsmVariables*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2F1CBF4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetAllNamedVariables() {
		return ((T (*)(FsmVariables*))(Il2CppBase() + 0x2F16920))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetNamedVariables(uintptr_t type) {
		return ((T (*)(FsmVariables*, uintptr_t))(Il2CppBase() + 0x2F1D73C))(this, type);
	}
	template <typename T = bool> T Contains(Il2CppString* variableName) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2F1D908))(this, variableName);
	}
	template <typename T = bool> T Contains_1(uintptr_t variable) {
		return ((T (*)(FsmVariables*, uintptr_t))(Il2CppBase() + 0x2F1DA2C))(this, variable);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetNames(uintptr_t ofType) {
		return ((T (*)(FsmVariables*, uintptr_t))(Il2CppBase() + 0x2F1DA9C))(this, ofType);
	}
	template <typename T = void> T OverrideVariableValues(uintptr_t source) {
		return ((T (*)(FsmVariables*, uintptr_t))(Il2CppBase() + 0x2EF2A28))(this, source);
	}
	template <typename T = void> T ApplyVariableValues(uintptr_t source) {
		return ((T (*)(FsmVariables*, uintptr_t))(Il2CppBase() + 0x2F1E2B8))(this, source);
	}
	template <typename T = void> T ApplyVariableValuesCareful(uintptr_t source) {
		return ((T (*)(FsmVariables*, uintptr_t))(Il2CppBase() + 0x2F1EB48))(this, source);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FloatVariables() {
		return ((T (*)(FsmVariables*))(Il2CppBase() + 0x2F1CBFC))(this);
	}
	template <typename T = void> T set_FloatVariables(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(FsmVariables*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2F202E8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_IntVariables() {
		return ((T (*)(FsmVariables*))(Il2CppBase() + 0x2F1CCBC))(this);
	}
	template <typename T = void> T set_IntVariables(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(FsmVariables*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2F202F0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_BoolVariables() {
		return ((T (*)(FsmVariables*))(Il2CppBase() + 0x2F1CD7C))(this);
	}
	template <typename T = void> T set_BoolVariables(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(FsmVariables*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2F202F8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_StringVariables() {
		return ((T (*)(FsmVariables*))(Il2CppBase() + 0x2F1CE3C))(this);
	}
	template <typename T = void> T set_StringVariables(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(FsmVariables*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2F20300))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Vector2Variables() {
		return ((T (*)(FsmVariables*))(Il2CppBase() + 0x2F1CEFC))(this);
	}
	template <typename T = void> T set_Vector2Variables(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(FsmVariables*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2F20308))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Vector3Variables() {
		return ((T (*)(FsmVariables*))(Il2CppBase() + 0x2F1CFBC))(this);
	}
	template <typename T = void> T set_Vector3Variables(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(FsmVariables*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2F20310))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_RectVariables() {
		return ((T (*)(FsmVariables*))(Il2CppBase() + 0x2F1D07C))(this);
	}
	template <typename T = void> T set_RectVariables(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(FsmVariables*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2F20318))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_QuaternionVariables() {
		return ((T (*)(FsmVariables*))(Il2CppBase() + 0x2F1D13C))(this);
	}
	template <typename T = void> T set_QuaternionVariables(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(FsmVariables*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2F20320))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ColorVariables() {
		return ((T (*)(FsmVariables*))(Il2CppBase() + 0x2F1D4FC))(this);
	}
	template <typename T = void> T set_ColorVariables(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(FsmVariables*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2F20328))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_GameObjectVariables() {
		return ((T (*)(FsmVariables*))(Il2CppBase() + 0x2F1D1FC))(this);
	}
	template <typename T = void> T set_GameObjectVariables(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(FsmVariables*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2F20330))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ArrayVariables() {
		return ((T (*)(FsmVariables*))(Il2CppBase() + 0x2F1D5BC))(this);
	}
	template <typename T = void> T set_ArrayVariables(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(FsmVariables*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2F20338))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_EnumVariables() {
		return ((T (*)(FsmVariables*))(Il2CppBase() + 0x2F1D67C))(this);
	}
	template <typename T = void> T set_EnumVariables(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(FsmVariables*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2F20340))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ObjectVariables() {
		return ((T (*)(FsmVariables*))(Il2CppBase() + 0x2F1D2BC))(this);
	}
	template <typename T = void> T set_ObjectVariables(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(FsmVariables*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2F20348))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_MaterialVariables() {
		return ((T (*)(FsmVariables*))(Il2CppBase() + 0x2F1D37C))(this);
	}
	template <typename T = void> T set_MaterialVariables(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(FsmVariables*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2F20350))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_TextureVariables() {
		return ((T (*)(FsmVariables*))(Il2CppBase() + 0x2F1D43C))(this);
	}
	template <typename T = void> T set_TextureVariables(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(FsmVariables*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2F20358))(this, value);
	}
	template <typename T = uintptr_t> T GetVariable(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2EDAB10))(this, name);
	}
	template <typename T = uintptr_t> T GetFsmFloat(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2EFCD1C))(this, name);
	}
	template <typename T = uintptr_t> T GetFsmObject(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2EFC6EC))(this, name);
	}
	template <typename T = uintptr_t> T GetFsmMaterial(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2EFC8FC))(this, name);
	}
	template <typename T = uintptr_t> T GetFsmTexture(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2EFCB0C))(this, name);
	}
	template <typename T = uintptr_t> T GetFsmInt(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2EFCF2C))(this, name);
	}
	template <typename T = uintptr_t> T GetFsmBool(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2EFD13C))(this, name);
	}
	template <typename T = uintptr_t> T GetFsmString(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2EFD34C))(this, name);
	}
	template <typename T = uintptr_t> T GetFsmVector2(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2EFD55C))(this, name);
	}
	template <typename T = uintptr_t> T GetFsmVector3(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2EFD76C))(this, name);
	}
	template <typename T = uintptr_t> T GetFsmRect(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2EFD97C))(this, name);
	}
	template <typename T = uintptr_t> T GetFsmQuaternion(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2EFDB8C))(this, name);
	}
	template <typename T = uintptr_t> T GetFsmColor(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2EFDD9C))(this, name);
	}
	template <typename T = uintptr_t> T GetFsmGameObject(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2EFDFAC))(this, name);
	}
	template <typename T = uintptr_t> T GetFsmArray(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2EFE1BC))(this, name);
	}
	template <typename T = uintptr_t> T GetFsmEnum(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2EFE3D8))(this, name);
	}
	template <typename T = void> T LogMissingVariable(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2F20360))(this, name);
	}
	template <typename T = uintptr_t> T FindVariable(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2F20470))(this, name);
	}
	template <typename T = uintptr_t> T FindVariable_1(uintptr_t type, Il2CppString* name) {
		return ((T (*)(FsmVariables*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2F20E90))(this, type, name);
	}
	template <typename T = uintptr_t> T FindFsmFloat(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2F1F630))(this, name);
	}
	template <typename T = uintptr_t> T FindFsmObject(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2F1FBF8))(this, name);
	}
	template <typename T = uintptr_t> T FindFsmMaterial(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2F1FD20))(this, name);
	}
	template <typename T = uintptr_t> T FindFsmTexture(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2F1FE48))(this, name);
	}
	template <typename T = uintptr_t> T FindFsmInt(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2F1F758))(this, name);
	}
	template <typename T = uintptr_t> T FindFsmBool(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2F1F880))(this, name);
	}
	template <typename T = uintptr_t> T FindFsmString(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2F1FF70))(this, name);
	}
	template <typename T = uintptr_t> T FindFsmVector2(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2F2196C))(this, name);
	}
	template <typename T = uintptr_t> T FindFsmVector3(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2F21A94))(this, name);
	}
	template <typename T = uintptr_t> T FindFsmRect(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2F1F9A8))(this, name);
	}
	template <typename T = uintptr_t> T FindFsmQuaternion(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2F1FAD0))(this, name);
	}
	template <typename T = uintptr_t> T FindFsmColor(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2F21BBC))(this, name);
	}
	template <typename T = uintptr_t> T FindFsmGameObject(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2F21CE4))(this, name);
	}
	template <typename T = uintptr_t> T FindFsmEnum(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2F20098))(this, name);
	}
	template <typename T = uintptr_t> T FindFsmArray(Il2CppString* name) {
		return ((T (*)(FsmVariables*, Il2CppString*))(Il2CppBase() + 0x2F201C0))(this, name);
	}

};

}
