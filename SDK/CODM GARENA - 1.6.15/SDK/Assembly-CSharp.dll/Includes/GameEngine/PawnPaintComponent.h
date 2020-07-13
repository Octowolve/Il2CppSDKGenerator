#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PawnPaintComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PawnPaintComponent"));
	}

	template <typename T = int32_t> T& m_PaintIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_CurrentPaintModel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Paint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPaintModelAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPaintModelReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachPaintModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DetachPaintModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginPlayPaintAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndPlayPaintAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PaintHere() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoPaint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(PawnPaintComponent*, uintptr_t))(Il2CppBase() + 0x273869C))(this, pawn);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(PawnPaintComponent*))(Il2CppBase() + 0x273875C))(this);
	}
	template <typename T = void> T Paint(int32_t index) {
		return ((T (*)(PawnPaintComponent*, int32_t))(Il2CppBase() + 0x2738A78))(this, index);
	}
	template <typename T = int32_t> T GetPaintModelAssetID() {
		return ((T (*)(PawnPaintComponent*))(Il2CppBase() + 0x2738CF8))(this);
	}
	template <typename T = void> T OnPaintModelReady(int32_t assetID, uintptr_t obj) {
		return ((T (*)(PawnPaintComponent*, int32_t, uintptr_t))(Il2CppBase() + 0x2738DCC))(this, assetID, obj);
	}
	template <typename T = void> T AttachPaintModel() {
		return ((T (*)(PawnPaintComponent*))(Il2CppBase() + 0x2739458))(this);
	}
	template <typename T = void> T DetachPaintModel() {
		return ((T (*)(PawnPaintComponent*))(Il2CppBase() + 0x273965C))(this);
	}
	template <typename T = void> T BeginPlayPaintAnim() {
		return ((T (*)(PawnPaintComponent*))(Il2CppBase() + 0x273926C))(this);
	}
	template <typename T = void> T EndPlayPaintAnim() {
		return ((T (*)(PawnPaintComponent*))(Il2CppBase() + 0x27397AC))(this);
	}
	template <typename T = void> T PaintHere() {
		return ((T (*)(PawnPaintComponent*))(Il2CppBase() + 0x2738B28))(this);
	}
	template <typename T = void> T DoPaint(int32_t itemID, Il2CppVector3 camPos, Il2CppVector3 dir, float dist) {
		return ((T (*)(PawnPaintComponent*, int32_t, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x27398F8))(this, itemID, camPos, dir, dist);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(PawnPaintComponent*, uintptr_t))(Il2CppBase() + 0x2739D84))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Destroy() {
		return ((T (*)(PawnPaintComponent*))(Il2CppBase() + 0x2739D88))(this);
	}

};

}
