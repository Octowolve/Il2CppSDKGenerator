#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua {

class StaticLuaCallbacks
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua", "StaticLuaCallbacks"));
	}

	template <typename T = uintptr_t> T& GcMeta() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& ToStringMeta() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& EnumAndMeta() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& EnumOrMeta() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& StaticCSFunctionWraper() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& FixCSFunctionWraper() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& DelegateCtor() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> static T __tryArrayGet(uintptr_t type, uintptr_t L, uintptr_t translator, uintptr_t obj, int32_t index) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0xF62FA0))(0, type, L, translator, obj, index);
	}
	template <typename T = bool> static T __tryArraySet(uintptr_t type, uintptr_t L, uintptr_t translator, uintptr_t obj, int32_t array_idx, int32_t obj_idx) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0xF636E0))(0, type, L, translator, obj, array_idx, obj_idx);
	}
	template <typename T = int32_t> static T EnumAnd(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5B728))(0, L);
	}
	template <typename T = int32_t> static T EnumOr(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5BAD4))(0, L);
	}
	template <typename T = int32_t> static T StaticCSFunction(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5BE80))(0, L);
	}
	template <typename T = int32_t> static T FixCSFunction(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5C1D4))(0, L);
	}
	template <typename T = int32_t> static T DelegateCall(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5C414))(0, L);
	}
	template <typename T = int32_t> static T LuaGC(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5C6FC))(0, L);
	}
	template <typename T = int32_t> static T ToString(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5C904))(0, L);
	}
	template <typename T = int32_t> static T DelegateCombine(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5CC28))(0, L);
	}
	template <typename T = int32_t> static T DelegateRemove(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5CFA4))(0, L);
	}
	template <typename T = bool> static T tryPrimitiveArrayGet(uintptr_t type, uintptr_t L, uintptr_t obj, int32_t index) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0xF63DA4))(0, type, L, obj, index);
	}
	template <typename T = int32_t> static T ArrayIndexer(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5D2FC))(0, L);
	}
	template <typename T = bool> static T TryPrimitiveArraySet(uintptr_t type, uintptr_t L, uintptr_t obj, int32_t array_idx, int32_t obj_idx) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0xF4FCE0))(0, type, L, obj, array_idx, obj_idx);
	}
	template <typename T = int32_t> static T ArrayNewIndexer(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5DA9C))(0, L);
	}
	template <typename T = int32_t> static T ArrayLength(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5E268))(0, L);
	}
	template <typename T = int32_t> static T MetaFuncIndex(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5E4D8))(0, L);
	}
	template <typename T = int32_t> static T Panic(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5E7A8))(0, L);
	}
	template <typename T = int32_t> static T Print(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5E8F8))(0, L);
	}
	template <typename T = int32_t> static T LoadSocketCore(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5ED50))(0, L);
	}
	template <typename T = int32_t> static T LoadCS(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5ED9C))(0, L);
	}
	template <typename T = int32_t> static T LoadBuiltinLib(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5EE80))(0, L);
	}
	template <typename T = int32_t> static T LoadFromResource(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5F180))(0, L);
	}
	template <typename T = int32_t> static T LoadFromStreamingAssetsPath(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5F630))(0, L);
	}
	template <typename T = int32_t> static T LoadFromCustomLoaders(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5FC58))(0, L);
	}
	template <typename T = int32_t> static T LoadAssembly(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF6018C))(0, L);
	}
	template <typename T = int32_t> static T ImportType(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF60504))(0, L);
	}
	template <typename T = int32_t> static T ImportGenericType(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF607E8))(0, L);
	}
	template <typename T = int32_t> static T Cast(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF60CDC))(0, L);
	}
	template <typename T = uintptr_t> static T getType(uintptr_t L, uintptr_t translator, int32_t idx) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0xF64830))(0, L, translator, idx);
	}
	template <typename T = int32_t> static T XLuaAccess(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF6106C))(0, L);
	}
	template <typename T = int32_t> static T XLuaPrivateAccessible(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF6158C))(0, L);
	}
	template <typename T = int32_t> static T XLuaMetatableOperation(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF61800))(0, L);
	}
	template <typename T = int32_t> static T DelegateConstructor(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF61BDC))(0, L);
	}
	template <typename T = int32_t> static T ToFunction(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF61EE0))(0, L);
	}
	template <typename T = int32_t> static T GenericMethodWraper(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF622B0))(0, L);
	}
	template <typename T = int32_t> static T GetGenericMethod(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF62820))(0, L);
	}
	template <typename T = int32_t> static T ReleaseCsObject(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF62DEC))(0, L);
	}

};

}
