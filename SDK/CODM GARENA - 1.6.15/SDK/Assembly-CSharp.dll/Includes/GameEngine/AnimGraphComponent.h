#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AnimGraphComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AnimGraphComponent"));
	}

	template <typename T = uintptr_t> T& m_Animator() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& ShowPlayableGraph() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_IsSubGraphMakedUp() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = bool> T& m_AnimatorObjectEventRegisterd() {
		return *(T*)((uintptr_t)this + 0x36);
	}
	template <typename T = uintptr_t> T& m_SubGraphRootPlayable() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_AnimatorControllerPlayable() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MixerPlayableNodeList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterAnimatorObjectEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterAnimatorObjectEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimatorObjectCreated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimatorObjectCleared() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAnimatorCleared() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSubGraphSourceRootPlayble() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedMakeSubGraph() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryMakeUpSubGraph() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MakeUpSubGraph() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryDestroySubGraph() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroySubGraph() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryDestroySubGraphAndRestoreAnimatorOriginalGraph() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyMixerPlayableNode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddMixerPlayableNode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateBlendTreeNode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateAnimationClipPlayableNodeEx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InsertAnimationMixerPlayableNode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InsertAnimationMixerPlayableToOneNode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InsertAnimationLayerMixerPlayableNode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InsertAnimationLayerMixerPlayable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InsertPlayable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}

	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(AnimGraphComponent*, uintptr_t))(Il2CppBase() + 0x2B61BAC))(this, pawn);
	}
	template <typename T = void> T UnInit() {
		return ((T (*)(AnimGraphComponent*))(Il2CppBase() + 0x2B621DC))(this);
	}
	template <typename T = void> T ClearAnimator() {
		return ((T (*)(AnimGraphComponent*))(Il2CppBase() + 0x2B62294))(this);
	}
	template <typename T = void> T RegisterAnimatorObjectEvent() {
		return ((T (*)(AnimGraphComponent*))(Il2CppBase() + 0x2B62008))(this);
	}
	template <typename T = void> T UnRegisterAnimatorObjectEvent() {
		return ((T (*)(AnimGraphComponent*))(Il2CppBase() + 0x2B62494))(this);
	}
	template <typename T = void> T AnimatorObjectCreated() {
		return ((T (*)(AnimGraphComponent*))(Il2CppBase() + 0x2B62668))(this);
	}
	template <typename T = void> T AnimatorObjectCleared() {
		return ((T (*)(AnimGraphComponent*))(Il2CppBase() + 0x2B6270C))(this);
	}
	template <typename T = void> T DestroyComponent() {
		return ((T (*)(AnimGraphComponent*))(Il2CppBase() + 0x2B62874))(this);
	}
	template <typename T = void> T OnAnimatorCleared() {
		return ((T (*)(AnimGraphComponent*))(Il2CppBase() + 0x2B62924))(this);
	}
	template <typename T = uintptr_t> T GetSubGraphSourceRootPlayble() {
		return ((T (*)(AnimGraphComponent*))(Il2CppBase() + 0x2B629D4))(this);
	}
	template <typename T = bool> T NeedMakeSubGraph() {
		return ((T (*)(AnimGraphComponent*))(Il2CppBase() + 0x2B62B64))(this);
	}
	template <typename T = void> T TryMakeUpSubGraph() {
		return ((T (*)(AnimGraphComponent*))(Il2CppBase() + 0x2B61DF0))(this);
	}
	template <typename T = void> T MakeUpSubGraph() {
		return ((T (*)(AnimGraphComponent*))(Il2CppBase() + 0x2B62C98))(this);
	}
	template <typename T = void> T TryDestroySubGraph() {
		return ((T (*)(AnimGraphComponent*))(Il2CppBase() + 0x2B627B0))(this);
	}
	template <typename T = void> T DestroySubGraph() {
		return ((T (*)(AnimGraphComponent*))(Il2CppBase() + 0x2B62D30))(this);
	}
	template <typename T = void> T TryDestroySubGraphAndRestoreAnimatorOriginalGraph() {
		return ((T (*)(AnimGraphComponent*))(Il2CppBase() + 0x2B62EE0))(this);
	}
	template <typename T = void> T DestroyMixerPlayableNode(uintptr_t node) {
		return ((T (*)(AnimGraphComponent*, uintptr_t))(Il2CppBase() + 0x2B6317C))(this, node);
	}
	template <typename T = void> T AddMixerPlayableNode(uintptr_t node) {
		return ((T (*)(AnimGraphComponent*, uintptr_t))(Il2CppBase() + 0x2B6325C))(this, node);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(AnimGraphComponent*, float))(Il2CppBase() + 0x2B6333C))(this, deltaTime);
	}
	template <typename T = uintptr_t> T CreateBlendTreeNode(uintptr_t animator, uintptr_t blendTreeType, Il2CppList<uintptr_t>* clips) {
		return ((T (*)(AnimGraphComponent*, uintptr_t, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2B634D0))(this, animator, blendTreeType, clips);
	}
	template <typename T = uintptr_t> static T CreateAnimationClipPlayableNodeEx(uintptr_t graph, uintptr_t animator, uintptr_t clip, Il2CppString* playableNodeName) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2B635DC))(0, graph, animator, clip, playableNodeName);
	}
	template <typename T = uintptr_t> static T InsertAnimationMixerPlayableNode(uintptr_t animator, Il2CppList<uintptr_t>* inputInfos, bool isBlendToBase, uintptr_t sourcePlayable) {
		return ((T (*)(void *, uintptr_t, Il2CppList<uintptr_t>*, bool, uintptr_t))(Il2CppBase() + 0x2B636F4))(0, animator, inputInfos, isBlendToBase, sourcePlayable);
	}
	template <typename T = uintptr_t> static T InsertAnimationMixerPlayableToOneNode(uintptr_t animator, Il2CppList<uintptr_t>* inputPlayableInfos, bool isBlendToBase, uintptr_t sourcePlayable) {
		return ((T (*)(void *, uintptr_t, Il2CppList<uintptr_t>*, bool, uintptr_t))(Il2CppBase() + 0x2B63A38))(0, animator, inputPlayableInfos, isBlendToBase, sourcePlayable);
	}
	template <typename T = uintptr_t> static T InsertAnimationLayerMixerPlayableNode(uintptr_t animator, Il2CppList<uintptr_t>* inputInfos, bool isBlendToBase, uintptr_t sourcePlayableNode, Il2CppString* playableName) {
		return ((T (*)(void *, uintptr_t, Il2CppList<uintptr_t>*, bool, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2B63E80))(0, animator, inputInfos, isBlendToBase, sourcePlayableNode, playableName);
	}
	template <typename T = uintptr_t> static T InsertAnimationLayerMixerPlayable(uintptr_t animator, Il2CppList<uintptr_t>* inputPlayableInfos, uintptr_t sourcePlayableNode, float baseInputWeight, Il2CppString* playableName) {
		return ((T (*)(void *, uintptr_t, Il2CppList<uintptr_t>*, uintptr_t, float, Il2CppString*))(Il2CppBase() + 0x2B6403C))(0, animator, inputPlayableInfos, sourcePlayableNode, baseInputWeight, playableName);
	}
	template <typename T = uintptr_t> static T InsertPlayable(uintptr_t playableGraph, uintptr_t playableHandle) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B64450))(0, playableGraph, playableHandle);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyComponent() {
		return ((T (*)(AnimGraphComponent*))(Il2CppBase() + 0x2B64574))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(AnimGraphComponent*, float))(Il2CppBase() + 0x2B6457C))(this, P0);
	}

};

}
