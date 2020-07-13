#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModelOptimizeBoneBuffer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModelOptimizeBoneBuffer"));
	}

	template <typename T = int32_t> static T& kBoneTransformSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_CurrentBindedBuffer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_AllBones() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_AllBonesSize() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_AllUniqueBones() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_AllUniqueBonesSize() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_UniqueBoneHintter() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllBonesBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUniqueBonesBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Resize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBoneRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnBindBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T GetAllBonesBuffer(uintptr_t handle, Il2CppArray<uintptr_t>** bones, uintptr_t* size) {
		return ((T (*)(ModelOptimizeBoneBuffer*, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t*))(Il2CppBase() + 0x32F6908))(this, handle, bones, size);
	}
	template <typename T = void> T GetUniqueBonesBuffer(uintptr_t handle, Il2CppArray<uintptr_t>** uniqueBones, uintptr_t* size) {
		return ((T (*)(ModelOptimizeBoneBuffer*, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t*))(Il2CppBase() + 0x32F6A84))(this, handle, uniqueBones, size);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(ModelOptimizeBoneBuffer*))(Il2CppBase() + 0x32F6C00))(this);
	}
	template <typename T = void> T Resize(int32_t targetSize) {
		return ((T (*)(ModelOptimizeBoneBuffer*, int32_t))(Il2CppBase() + 0x32F6CE0))(this, targetSize);
	}
	template <typename T = void> T AddBoneRange(void* col, int32_t offset, int32_t count) {
		return ((T (*)(ModelOptimizeBoneBuffer*, void*, int32_t, int32_t))(Il2CppBase() + 0x32F6FB4))(this, col, offset, count);
	}
	template <typename T = void> T UnBindBuffer(uintptr_t requester) {
		return ((T (*)(ModelOptimizeBoneBuffer*, uintptr_t))(Il2CppBase() + 0x32F73A4))(this, requester);
	}
	template <typename T = void> T BindBuffer(uintptr_t requester) {
		return ((T (*)(ModelOptimizeBoneBuffer*, uintptr_t))(Il2CppBase() + 0x32F75C8))(this, requester);
	}

};

}
