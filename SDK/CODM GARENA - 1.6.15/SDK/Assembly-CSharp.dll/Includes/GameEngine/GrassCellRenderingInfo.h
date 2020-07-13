#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class GrassCellRenderingInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "GrassCellRenderingInfo"));
	}

	template <typename T = int32_t> T& GrassType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& Position() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& LodLevel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& RenderingMat() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& LastActiveFrame() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& LastActiveTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseHighLodLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLodLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRenderDensityMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T UseHighLodLevel() {
		return ((T (*)(GrassCellRenderingInfo*))(Il2CppBase() + 0x36E76F4))(this);
	}
	template <typename T = void> T SetLodLevel(int32_t gridIndexX, int32_t gridIndexZ) {
		return ((T (*)(GrassCellRenderingInfo*, int32_t, int32_t))(Il2CppBase() + 0x36EF830))(this, gridIndexX, gridIndexZ);
	}
	template <typename T = void> T SetOwner(uintptr_t owner) {
		return ((T (*)(GrassCellRenderingInfo*, uintptr_t))(Il2CppBase() + 0x36EF928))(this, owner);
	}
	template <typename T = uintptr_t> T GetRenderDensityMap() {
		return ((T (*)(GrassCellRenderingInfo*))(Il2CppBase() + 0x36EF9D0))(this);
	}
	template <typename T = uintptr_t> T get_RenderingMat() {
		return ((T (*)(GrassCellRenderingInfo*))(Il2CppBase() + 0x36E7B9C))(this);
	}
	template <typename T = void> T set_RenderingMat(uintptr_t value) {
		return ((T (*)(GrassCellRenderingInfo*, uintptr_t))(Il2CppBase() + 0x36E7B94))(this, value);
	}
	template <typename T = int32_t> T get_LastActiveFrame() {
		return ((T (*)(GrassCellRenderingInfo*))(Il2CppBase() + 0x36EFAF8))(this);
	}
	template <typename T = void> T set_LastActiveFrame(int32_t value) {
		return ((T (*)(GrassCellRenderingInfo*, int32_t))(Il2CppBase() + 0x36EFB00))(this, value);
	}
	template <typename T = float> T get_LastActiveTime() {
		return ((T (*)(GrassCellRenderingInfo*))(Il2CppBase() + 0x36EFB08))(this);
	}
	template <typename T = void> T set_LastActiveTime(float value) {
		return ((T (*)(GrassCellRenderingInfo*, float))(Il2CppBase() + 0x36EFB10))(this, value);
	}
	template <typename T = bool> T get_IsValid() {
		return ((T (*)(GrassCellRenderingInfo*))(Il2CppBase() + 0x36EFB18))(this);
	}

};

}
